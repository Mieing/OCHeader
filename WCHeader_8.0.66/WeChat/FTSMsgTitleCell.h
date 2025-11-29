@class AttributeLabel, MMHeadImageView, UIView;

@interface FTSMsgTitleCell : MMTableViewCell {
    AttributeLabel *_titleLabel;
    AttributeLabel *_subTitleLabel;
    MMHeadImageView *_headImageView;
    MMHeadImageView *_secdHeadImageView;
    UIView *_topLine;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView:(double)a0;
- (void)updateTitle:(id)a0;
- (void)updateTitle:(id)a0 andContact:(id)a1 andMatchTip:(id)a2 andSubContact:(id)a3 andSubMatchTip:(id)a4;
- (void)updateTitle:(id)a0 matchTip:(id)a1 query:(id)a2;
- (id)titleWithSuffix:(id)a0 contentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)titleWithArrow:(id)a0 contentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 arrowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)convertCompressString:(id)a0 font:(id)a1 markLocation:(unsigned long long)a2;
- (void).cxx_destruct;

@end
