@class MMUIImageView, MMUILabel;

@interface IntelligentMsgLabelTipCell : MMTableViewCell {
    MMUIImageView *m_leftImageView;
    MMUILabel *m_titleLabel;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateCellWithLableTip:(id)a0;
- (void).cxx_destruct;

@end
