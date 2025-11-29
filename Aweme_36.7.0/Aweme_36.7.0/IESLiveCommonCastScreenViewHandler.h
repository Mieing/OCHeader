@class IESLiveCastScreenWindow, UIImage;
@protocol IESLiveCommonCastScreenViewStrategy;

@interface IESLiveCommonCastScreenViewHandler : NSObject

@property (retain, nonatomic) id<IESLiveCommonCastScreenViewStrategy> strategy;
@property (retain, nonatomic) IESLiveCastScreenWindow *windowView;
@property (retain, nonatomic) UIImage *businessIcon;

- (void)didSetAttachingDIContext;
- (void)stopCast;
- (id)initWithBusiness:(id)a0 room:(id)a1;
- (void)startWithBusiness:(id)a0 complete:(id /* block */)a1;
- (void)resumeScreenCast;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)setupCastBusinessIcon:(id)a0;
- (void)removeWindowViewFromCurrentScreen;
- (void)addViewToContainer:(id)a0;
- (void)updateInteractionItemAlpha:(double)a0;
- (void)updatePKItemAlpha:(double)a0;
- (void)handleCastBusinessIcon:(id)a0 completion:(id /* block */)a1;
- (id)backgroundToastText;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDelegate:(id)a0;

@end
