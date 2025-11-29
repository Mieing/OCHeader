@class CABasicAnimation, UIImageView, NSString;

@interface CameraScanCodesCenterDotView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) CABasicAnimation *loadingDotAnimation;
@property (retain, nonatomic) UIImageView *loadingDotView;
@property (retain, nonatomic) UIImageView *netDisconnectView;
@property (retain, nonatomic) UIImageView *scanGoodsGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setupSubviews;
- (void)setupAnimations;
- (void)layoutSubviews;
- (void)startLoadingDotAnimation;
- (void)stopLoadingDotAnimation;
- (void).cxx_destruct;

@end
