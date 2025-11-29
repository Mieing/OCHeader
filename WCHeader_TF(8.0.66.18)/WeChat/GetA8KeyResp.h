@class SKBuiltinBuffer_t, NSString, JSAPIPermissionBitSet, DeepLinkBitSet, GeneralControlBitSet, NSMutableArray, BaseResponse;

@interface GetA8KeyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *fullUrl;
@property (retain, nonatomic) NSString *a8Key;
@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) JSAPIPermissionBitSet *jsapipermission;
@property (retain, nonatomic) GeneralControlBitSet *generalControlBitSet;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *shareUrl;
@property (nonatomic) unsigned int scopeCount;
@property (retain, nonatomic) NSMutableArray *scopeList;
@property (retain, nonatomic) NSString *antispamTicket;
@property (retain, nonatomic) NSString *ssid;
@property (retain, nonatomic) NSString *mid;
@property (retain, nonatomic) DeepLinkBitSet *deepLinkBitSet;
@property (retain, nonatomic) SKBuiltinBuffer_t *jsapicontrolBytes;
@property (nonatomic) unsigned int httpHeaderCount;
@property (retain, nonatomic) NSMutableArray *httpHeader;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) SKBuiltinBuffer_t *cookie;
@property (retain, nonatomic) NSString *menuWording;
@property (retain, nonatomic) SKBuiltinBuffer_t *verifyPrefetchInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *webComponentInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *spamExtBuf;

+ (void)initialize;

@end
