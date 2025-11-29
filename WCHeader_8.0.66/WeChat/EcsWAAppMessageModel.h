@class NSString, EcsInfoItem;

@interface EcsWAAppMessageModel : NSObject

@property (retain, nonatomic) NSString *sourceAppID;
@property (retain, nonatomic) NSString *sourceAppName;
@property (retain, nonatomic) NSString *sourceUsername;
@property (nonatomic) unsigned int sourceVersion;
@property (retain, nonatomic) NSString *sourceBrandIconUrl;
@property (nonatomic) unsigned int sourceAppServiceType;
@property (nonatomic) unsigned int sourceBrandOfficialFlag;
@property (nonatomic) unsigned int sourceRelievedBuyFlag;
@property (nonatomic) unsigned int sourceFlagshipFlag;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) unsigned int bizType;
@property (retain, nonatomic) NSString *bizSourceName;
@property (retain, nonatomic) NSString *bizSourceIconUrl;
@property (retain, nonatomic) EcsInfoItem *ecsInfo;

- (id)genAppMsgItem;
- (id)initWithParams:(id)a0 extraData:(id)a1;
- (void).cxx_destruct;

@end
