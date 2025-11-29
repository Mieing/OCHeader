@class NSMutableArray, BaseRequest, NSString, BaseEvent, QueryWeChatWalletResponse, WalletLocationInfo;

@interface QueryWeChatWalletRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) BaseEvent *baseEvent;
@property (nonatomic) unsigned int balanceVersion;
@property (retain, nonatomic) NSString *bindTypeCond;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (nonatomic) int isDeviceOpenTouch;
@property (nonatomic) int isRoot;
@property (nonatomic) int isRealTime;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) QueryWeChatWalletResponse *cacheResp;
@property (retain, nonatomic) WalletLocationInfo *clientLocationInfo;
@property (retain, nonatomic) NSMutableArray *installed3RdAppList;

+ (void)initialize;

@end
