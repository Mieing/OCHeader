@class BaseRequest, NSData, NSString;

@interface BizOcrImageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *imgData;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int ocrType;
@property (retain, nonatomic) NSString *sessionKey;
@property (nonatomic) unsigned int seqNum;

+ (void)initialize;

@end
