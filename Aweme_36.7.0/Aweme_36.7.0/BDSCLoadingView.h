@class UIImageView, UIImage, NSString;

@interface BDSCLoadingView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *loadingView;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) UIImage *finishedImage;
@property (retain, nonatomic) UIImage *loadingImage;
@property (nonatomic) double animationDuration;
@property (nonatomic) float repeatCount;
@property (nonatomic) BOOL isReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLoadingImage:(id)a0 finishedImage:(id)a1;
- (void)stopLoadingWithoutHidden;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)startLoading;
- (void)stopLoading;

@end
