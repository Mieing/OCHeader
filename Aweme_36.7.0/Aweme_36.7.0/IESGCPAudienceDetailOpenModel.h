@class NSString, NSDictionary, IESGCPAudienceDetailTabControlMsg, NSArray, NSNumber;

@interface IESGCPAudienceDetailOpenModel : NSObject <IESGCPAudienceDetailOpenModelProtocol>

@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) unsigned long long promoteScene;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *schemaEnterFrom;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *promoterID;
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

- (void)makeBaseModelWithGameId:(id)a0 enterFrom:(id)a1 reportParams:(id)a2;
- (id)initOfficialModelWithGameId:(id)a0 enterFrom:(id)a1 reportParams:(id)a2;
- (id)initVideoModelWithGameId:(id)a0 enterFrom:(id)a1 promoterId:(id)a2 videoId:(id)a3 reportParams:(id)a4;
- (id)initLiveModelWithGameId:(id)a0 enterFrom:(id)a1 promoterId:(id)a2 roomId:(id)a3 reportParams:(id)a4;
- (id)initTrackModelWithGameID:(id)a0 enterFrom:(id)a1 promoterID:(id)a2 promoteScene:(unsigned long long)a3 roomID:(id)a4 videoID:(id)a5 reportParams:(id)a6;
- (void).cxx_destruct;

@end
