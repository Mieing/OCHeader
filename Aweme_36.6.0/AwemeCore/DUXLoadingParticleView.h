@class NSString, UIView;
@protocol DUXAnimationViewProtocol;

@interface DUXLoadingParticleView : UIView <IESIMParticleLoadingProtocol, IESLLLoadingParticleViewInterface, DUXLoadingViewProtocol>

@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<DUXAnimationViewProtocol> *animation;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double maxScale;
@property (nonatomic) long long style;
@property (nonatomic) double progress;
@property (nonatomic) double animationAlpha;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aDUXCommonAdapterClass;

- (void)updateFrameIfNeeded;
- (void)stopLoadingWithHide:(BOOL)a0;
- (void)stopLoadingAnimated:(BOOL)a0;
- (id)initWithStyle:(long long)a0 enlargeType:(unsigned long long)a1;
- (id)aDUXCommonAdapter;
- (void)showLoadingParticleView;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)setHidden:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void)stopLoading;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
