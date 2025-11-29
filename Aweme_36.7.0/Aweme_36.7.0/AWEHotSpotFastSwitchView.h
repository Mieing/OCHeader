@class UILabel, UIImageView;

@interface AWEHotSpotFastSwitchView : UIView

@property (retain, nonatomic) UILabel *despLabel;
@property (retain, nonatomic) UIImageView *nextImageView;
@property (nonatomic) BOOL isFoldState;
@property (copy, nonatomic) id /* block */ switchNextHandleBlock;

- (void)configureUI;
- (void)foldFastSwitchView;
- (void)nextViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
