@class BaseRequest, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface UploadCardImgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (retain, nonatomic) NSString *contactUserName;
@property (nonatomic) unsigned int cardImgCount;
@property (retain, nonatomic) NSMutableArray *cardImgList;

+ (void)initialize;

@end
