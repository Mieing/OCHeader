@class AWELivePreStreamContainerPlugin, AWELivePreStreamPlayer, NSDictionary, NSString, UIView, NSNumber, AWELivePreStreamBusinessParamsServiceImp;
@protocol AWELivePreStreamMessageProvider, AWELivePreStreamSEIProvider, AWELivePreStreamViewProtocol, AWELivePreStreamEventService, AWELivePreStreamBizStatusService, AWELivePreStreamContainerService, AWELivePreStreamAlertElementService, AWELiveElementInfoDelegate, AWELivePreStreamEnterRoomManagerInterface;

@interface AWELivePreStreamContext : AWEPageContext

@property (weak, nonatomic) id<AWELiveElementInfoDelegate> infoDelegate;
@property (weak, nonatomic) id<AWELivePreStreamMessageProvider> messageProvider;
@property (weak, nonatomic) id<AWELivePreStreamSEIProvider> seiProvider;
@property (weak, nonatomic) UIView<AWELivePreStreamViewProtocol> *streamView;
@property (weak, nonatomic) AWELivePreStreamPlayer *player;
@property (weak, nonatomic) id<AWELivePreStreamEnterRoomManagerInterface> enterRoomService;
@property (weak, nonatomic) id<AWELivePreStreamBizStatusService> bizStatusService;
@property (weak, nonatomic) id<AWELivePreStreamAlertElementService> alertElementService;
@property (weak, nonatomic) id<AWELivePreStreamEventService> eventService;
@property (weak, nonatomic) id<AWELivePreStreamContainerService> containerService;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) NSNumber *paidLiveLeftTime;
@property (nonatomic) BOOL isIntimateChatOn;
@property (nonatomic) BOOL enableLandscapeInRoom;
@property (copy, nonatomic) NSString *guideType;
@property (copy, nonatomic) NSString *clickType;
@property (nonatomic) BOOL hasClickPKArea;
@property (nonatomic) BOOL isExplicitComment;
@property (nonatomic) BOOL disableReusePlayerWhenExitRoom;
@property (nonatomic) BOOL isLivePlayerClosed;
@property (nonatomic) long long ntpDiffTime;
@property (nonatomic) BOOL roomEntered;
@property (nonatomic) BOOL quitByCloseButton;
@property (nonatomic) BOOL closeRoomAutoSlide;
@property (retain, nonatomic) AWELivePreStreamBusinessParamsServiceImp *businessParamsService;
@property (copy, nonatomic) NSDictionary *blurImageParams;
@property (nonatomic) BOOL canShowFinishView;
@property (nonatomic) BOOL enableLivePreMix;
@property (nonatomic) BOOL enablePreBootLoader;
@property (retain, nonatomic) AWELivePreStreamContainerPlugin *containerPlugin;
@property (retain, nonatomic) NSDictionary *prestreamEnterRoomParams;
@property (nonatomic) BOOL isInnerFeedPrestream;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;

- (void)dealloc;
- (void).cxx_destruct;

@end
