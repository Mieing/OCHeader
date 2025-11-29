@class NSString, AWEAwemeModel, AWEAwemeSearchExtraVideoFooterLynxModel, UIView;
@protocol AWEModernFeedVideoFooterLynxViewDelegate, AWESearchDynamicEngineProtocol, BDXViewContainerProtocol;

@interface AWEModernFeedVideoFooterLynxView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) id<AWESearchDynamicEngineProtocol> lynxEngine;
@property (nonatomic) BOOL useBullet;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeSearchExtraVideoFooterLynxModel *model;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isShowLynx;
@property (weak, nonatomic) id<AWEModernFeedVideoFooterLynxViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseBullet;
+ (void)registCommerceJSCallNativeHandlerWithLynxEngine:(id)a0 aweme:(id)a1;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)didEndShowing;
- (void)didStartShowing;
- (void)lynxViewDidMount;
- (void)postLynxCardDataToWeb;
- (void)sendShowEventIfNeeded;
- (id)currentLynxView;
- (void)updateModel:(id)a0 leftMargin:(double)a1 videoWidth:(double)a2 useWaterfallLayoutSchema:(BOOL)a3;
- (void)sendDismissEventIfNeeded;
- (id)bdxViewWithModel:(id)a0 leftMergin:(double)a1 videoWidth:(double)a2 useWaterfallLayoutSchema:(BOOL)a3;
- (BOOL)shouldInitLynxEngine:(id)a0 schema:(id)a1;
- (void).cxx_destruct;

@end
