@class DUXTextArea;

@interface AWELongPressPanelAdsActionSectionFooterView : UICollectionReusableView

@property (retain, nonatomic) DUXTextArea *textInputView;
@property (copy, nonatomic) id /* block */ didBeginInput;
@property (copy, nonatomic) id /* block */ didCompletedInput;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputFrameInWindow;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
