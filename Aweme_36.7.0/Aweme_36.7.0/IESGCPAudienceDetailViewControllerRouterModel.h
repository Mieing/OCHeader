@class NSString, NSDictionary, IESGCPAudienceDetailTabControlMsg, IESGCPAudienceDetailOpenModel, NSNumber, NSArray;

@interface IESGCPAudienceDetailViewControllerRouterModel : NSObject <IESGCPAudienceDetailOpenModelProtocol>

@property (retain, nonatomic) IESGCPAudienceDetailOpenModel *openModel;
@property (readonly, nonatomic) long long hasPromotionGames;
@property (readonly, nonatomic) NSDictionary *route;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *schemaEnterFrom;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *promoterID;
@property (readonly, nonatomic) unsigned long long promoteScene;
@property (copy, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL isOpenAsFullScreen;
@property (nonatomic) BOOL canHalfScreen;
@property (nonatomic) BOOL useBackIcon;
@property (copy, nonatomic) NSString *defaultTabID;
@property (retain, nonatomic) IESGCPAudienceDetailTabControlMsg *tabsControlMsg;
@property (copy, nonatomic) NSDictionary *reportParams;
@property (copy, nonatomic) NSDictionary *storeKitConfig;
@property (copy, nonatomic) NSString *bizMode;
@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (copy, nonatomic) NSString *parentDIContextAddress;
@property (nonatomic) long long isRsvp;
@property (retain, nonatomic) NSString *trackId;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSArray *preloadLynxCardIds;
@property (nonatomic) long long isLivecellReport;
@property (nonatomic) long long isInPreviewExp;
@property (nonatomic) BOOL disableCacheData;
@property (copy, nonatomic) NSString *prefixCacheKey;
@property (copy, nonatomic) NSString *sourceBTMToken;
@property (nonatomic) BOOL presentAnimationSwitch;
@property (nonatomic) BOOL isShowVideoCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOpenModel:(id)a0;
- (id)toLynxCardParams;
- (void).cxx_destruct;

@end
