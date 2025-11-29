@class NSString, NSDictionary, BDXBridgeEventSubscriber, UIView, AWEHotSpotChannelViewModel;
@protocol AWEHotSpotHorizontalCardProtocol, AWEHotSpotSkylightViewControllerDelegate, AWEHotSpotSkylightLynxViewProtocol;

@interface AWEHotSpotSkylightViewController : UIViewController <AWEBottomContainerViewLifeCycleDelegate, HunterContainerLifeCycleProtocol>

@property (nonatomic) double realHeight;
@property (retain, nonatomic) UIView<AWEHotSpotSkylightLynxViewProtocol> *lynxView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *renderFinishSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *requestUpdateDataSubscriber;
@property (nonatomic) BOOL hasLoadData;
@property (nonatomic) BOOL skyLightDataLoadFinish;
@property (copy, nonatomic) NSDictionary *skyLightData;
@property (nonatomic) long long skyLightHeightLimit;
@property (nonatomic) BOOL hasShowBackground;
@property (weak, nonatomic) id<AWEHotSpotSkylightViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView<AWEHotSpotHorizontalCardProtocol> *card;
@property (weak, nonatomic) AWEHotSpotChannelViewModel *channelViewModel;
@property (nonatomic) BOOL isShowingSkyLightView;
@property (nonatomic) BOOL isShowingOnView;
@property (nonatomic) BOOL isShowingSkyLightViewBeforeUpdate;
@property (nonatomic) BOOL hasResignActive;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSDictionary *lynxViewBackgroundColorDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)preloadData;
- (void)handleLynxNotification:(id)a0;
- (void)containerViewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)containerViewDidFinishLoadWithURL:(id)a0;
- (void)containerViewDidLoadFailedWithURL:(id)a0 error:(id)a1;
- (void)updateClientData;
- (void)preLoadLynxViewURL;
- (void)registerEvent;
- (void)updateViewHeight;
- (void)updateInsertData;
- (void)openSkylight;
- (id)skylightView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshWithCompletion:(id /* block */)a0;
- (double)viewHeight;
- (void)addObservers;

@end
