@class BaseResponse, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface GetConnectInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) SKBuiltinBuffer_t *key;
@property (retain, nonatomic) NSString *hello;
@property (retain, nonatomic) NSString *ok;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int addrCount;
@property (retain, nonatomic) NSMutableArray *addrList;
@property (retain, nonatomic) NSString *resource;
@property (retain, nonatomic) NSString *pcName;
@property (retain, nonatomic) NSString *pcAcctName;
@property (nonatomic) unsigned int encryFlag;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) NSString *wifiName;

+ (void)initialize;

@end
