@class BaseRequest, NSMutableArray, NSString;

@interface BakChatCreateQRCodeOfflineRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int addrCount;
@property (retain, nonatomic) NSMutableArray *addrList;
@property (retain, nonatomic) NSString *pcName;
@property (retain, nonatomic) NSString *pcAcctName;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) NSString *wifiName;
@property (retain, nonatomic) NSString *ticket;

+ (void)initialize;

@end
