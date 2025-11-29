@class AWEIMRefreshImageView, UIImageView, UITapGestureRecognizer;

@interface AWEIMMediaView : UIView

@property (retain, nonatomic) AWEIMRefreshImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)configWithModel:(id)a0;
- (void)p_setup;
- (void)p_configAccessibility:(id)a0;
- (void)p_configImageView:(id)a0;
- (void)p_configPlayIcon:(id)a0;
- (void)p_didTappedCover;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
