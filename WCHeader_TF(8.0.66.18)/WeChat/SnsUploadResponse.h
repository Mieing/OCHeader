@class NSString, SnsBufferUrl, NSMutableArray, BaseResponse;

@interface SnsUploadResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int totalLen;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) SnsBufferUrl *bufferUrl;
@property (nonatomic) unsigned int thumbUrlCount;
@property (retain, nonatomic) NSMutableArray *thumbUrls;
@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
