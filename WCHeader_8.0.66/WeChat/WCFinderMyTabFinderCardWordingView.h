@class NSString, UIImageView, UILabel, UIView;

@interface WCFinderMyTabFinderCardWordingView : UIView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UILabel *wordingLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) NSString *wording;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)makeTopLine;
- (void)makeWordingLabel;
- (void)makeArrow;
- (void)_layoutSubview;
- (void).cxx_destruct;

@end
