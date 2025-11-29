@class UIImageView, MMUILabel, MMUIButton;
@protocol MMLimitedModeGuardianEntryViewDelegate;

@interface MMLimitedModeGuardianEntryView : MMUIView {
    MMUIButton *m_button;
    MMUILabel *m_titleLabel;
    UIImageView *m_arrowView;
}

@property (weak, nonatomic) id<MMLimitedModeGuardianEntryViewDelegate> m_delegate;
@property (retain, nonatomic) MMUILabel *m_descLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initView;
- (void)updateWihtDisplayName:(id)a0;
- (void)clickSetLimitedModeGuardian;
- (void).cxx_destruct;

@end
