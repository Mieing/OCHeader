@class NSObject, NSString, AWERelatedLongVideoPaymentLynxEventHandler, NSMutableSet, AWESinglePayEpisodeDiversionXiguaManager, AWERVDetailPageContext, UIViewController;
@protocol AWERVContainerProtocol;

@interface AWERVLongVideoViewModel : NSObject <AWERelatedLongVideoPaymentLynxEventHandlerDelegate>

@property (weak, nonatomic) UIViewController<AWERVContainerProtocol> *container;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (nonatomic) BOOL isScreenCast;
@property (nonatomic) BOOL isSwitchingEpisode;
@property (nonatomic) BOOL isSwitchingLanguage;
@property (nonatomic) BOOL isSwitchingPaidAlbum;
@property (nonatomic) BOOL defaultScrollToFeedShare;
@property (nonatomic) BOOL shouldLoadWatchHistory;
@property (nonatomic) BOOL shouldLoadHighlight;
@property (nonatomic) BOOL isShowXiGuaAppStore;
@property (nonatomic) BOOL revisitImageIsReady;
@property (retain, nonatomic) NSObject *recordScreenBlocker;
@property (retain, nonatomic) AWERelatedLongVideoPaymentLynxEventHandler *paymentLynxEventHandler;
@property (copy, nonatomic) NSString *currentPaymentEpisodeId;
@property (copy, nonatomic) NSString *watchTaskFinishSchema;
@property (retain, nonatomic) NSMutableSet *uploadedSet;
@property (retain, nonatomic) AWESinglePayEpisodeDiversionXiguaManager *singlePayEpisodeDiversionXiguaManager;
@property (nonatomic) BOOL isShowingDeviceLimitView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestFrom:(id)a0;
+ (BOOL)validateAwemeModel:(id)a0;
+ (id)paymentStatus:(id)a0;

- (id)awemeModel;
- (void)trackLongVideoShow:(id)a0;
- (id)paramsForTrackLongVideo;
- (BOOL)needTrackLVideoShow:(id)a0;
- (id)initWithContainer:(id)a0 pageContext:(id)a1;
- (void)setupScreenBlockerWhenCallBack:(id /* block */)a0;
- (void)trackLVButtonShow:(id)a0;
- (void)trackLVButtonClick:(id)a0;
- (void)trackPlayDoneXiguaGuideClick:(id)a0;
- (void)trackPlayDoneXiguaGuideShow:(id)a0;
- (void)requestWidgetInfoWithAlbumID:(id)a0 episodeID:(id)a1 awemeModel:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
