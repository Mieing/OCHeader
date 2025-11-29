@class BaseRequest, NSMutableArray, NSString;

@interface BakChatCreateQRCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int addrCount;
@property (retain, nonatomic) NSMutableArray *addrList;
@property (retain, nonatomic) NSString *pcName;
@property (retain, nonatomic) NSString *pcAcctName;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) NSString *wifiName;

+ (void)initialize;

@end
