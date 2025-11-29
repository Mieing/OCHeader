@class NSString;

@interface IESGCPPBGameDetailInitialData : GPBMessage

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *promoterId;
@property (nonatomic) BOOL isOpenAsFullScreen;
@property (nonatomic) BOOL canHalfScreen;
@property (nonatomic) BOOL useBackIcon;
@property (copy, nonatomic) NSString *defaultTabId;
@property (nonatomic) long long bizMode;
@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) long long bizType;
@property (nonatomic) BOOL isRsvp;
@property (copy, nonatomic) NSString *trackId;
@property (copy, nonatomic) NSString *tabsControlMsg;
@property (copy, nonatomic) NSString *storeKitConfig;
@property (nonatomic) BOOL isOpenAsInstalled;
@property (copy, nonatomic) NSString *promoteInstanceId;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *parentDiContextAddress;
@property (copy, nonatomic) NSString *preloadLynxCardIds;
@property (nonatomic) BOOL isLivecellReport;
@property (nonatomic) BOOL isInPreviewExp;
@property (nonatomic) BOOL isShowVideoCover;
@property (nonatomic) long long startInitialTime;

+ (id)descriptor;

@end
