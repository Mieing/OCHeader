@class HTSLiveToolbarItemConfig, NSString, HTSLiveToolbarItem, HTSLiveImage, HTSLiveToolbarItemExtra, NSMutableSet, UIViewController, NSNumber;
@protocol IESHYControllerProtocol;

@interface IESLiveVSToolbarActivityFragment : IESLiveRoomComponent <IESHYControllerDelegate, HTSLiveMessageSubscriber, IESLiveVSActivityRouter, HTSLiveStreamPlayerAction, IESLiveAudienceMoreToolsAction, IESLiveToolbarComponentHandler>

@property (retain, nonatomic) HTSLiveToolbarItem *activityItem;
@property (retain, nonatomic) HTSLiveToolbarItemConfig *activityConfig;
@property (nonatomic) BOOL isRankItem;
@property (retain, nonatomic) UIViewController<IESHYControllerProtocol> *webVC;
@property (retain, nonatomic) NSMutableSet *didShowItems;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *episodeID;
@property (retain, nonatomic) NSString *afterUpdatePopupScheme;
@property (nonatomic) BOOL hasReportShow;
@property (nonatomic) long long activityItemStatus;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (copy, nonatomic) NSString *toolbarDataJsonStr;
@property (copy, nonatomic) NSString *toolbarDataSchemaURL;
@property (retain, nonatomic) HTSLiveToolbarItemExtra *toolBarDataExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)componentBindService;
- (void)componentCreate;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void)remoteRoomDataReady:(id)a0;
- (double)bottomContainerHeight;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)onStreamProgressUpdate:(double)a0 start:(double)a1 latest:(double)a2 trackCurrentSEIts:(id)a3 callTrace:(id)a4;
- (void)onRoomStyleDidChange:(BOOL)a0 callTrace:(id)a1;
- (id)iconViewWithImage:(id)a0;
- (id)appendQueryURLWithBaseUrl:(id)a0;
- (void)showActivityWithSchema:(id)a0;
- (void)showWebpAnimation;
- (void)didUpdateVSLiveRoom:(id)a0;
- (void)traceWithName:(id)a0;
- (id)webpIconWithImage:(id)a0;
- (void)handleItemDidTapAction:(id)a0;
- (BOOL)isVoteToolbarWithSchema:(id)a0;
- (void)showBubbleWithMsg:(id)a0;
- (void)handleItemDidShow:(id)a0 scence:(id)a1;
- (void)getServerActivityConfig;
- (void)initActivityItemsServerControl;
- (BOOL)shouldShowVoteToolbarWithVerticalSteam:(BOOL)a0 schema:(id)a1;
- (void)traceWithName:(id)a0 removeReason:(id)a1;
- (id)invokeDict;
- (void)removeActivityItems;
- (id)toolbarDataTraceWithArray:(id)a0 identity:(id)a1;
- (id)toolbar;
- (void).cxx_destruct;
- (id)playerView;
- (void)messageReceived:(id)a0;

@end
