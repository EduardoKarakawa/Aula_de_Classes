#pragma once
#include "ofApp.h"

class Primitivo {
	private:
		ofVec2f m_posicao;
		int m_r, m_g, m_b;

	public:
		Primitivo(int x, int y){
			m_posicao.set(x, y);
		}

		void SetPosicao(int x, int y) {
			m_posicao.set(x, y);
		}

		void SetColor(int r, int g, int b) {
			m_r = r;
			m_g = g;
			m_b = b;
		}

		ofVec2f GetPosicao() {
			return m_posicao;
		}

		

		~Primitivo(){}
};