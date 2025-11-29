@class NSString, UIImage;

@interface AWETeenLoadingButton : UIButton

@property (copy, nonatomic) NSString *stashTitle;
@property (retain, nonatomic) UIImage *stashImage;

- (id)p_loadingAnimation;
- (id)p_image:(id)a0 tintColor:(id)a1 blendMode:(int)a2;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
