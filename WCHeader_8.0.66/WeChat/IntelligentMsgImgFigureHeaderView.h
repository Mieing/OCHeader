@class MMUILabel, MMUIImageView;

@interface IntelligentMsgImgFigureHeaderView : MMUIView {
    MMUILabel *m_titleLabel;
    MMUIImageView *m_figureImageView;
    MMUILabel *m_figureCountLabel;
}

- (id)init;
- (void)layoutView;
- (void)layoutTitleLabel;
- (void)layoutFigureImageView;
- (void)layoutFigureCountLabel;
- (void)layoutSubviews;
- (void)updateFigureImageView:(id)a0 figureCount:(unsigned int)a1;
- (double)calculationHeight;
- (void).cxx_destruct;

@end
