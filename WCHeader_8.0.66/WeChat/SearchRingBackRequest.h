@class BaseRequest, NSString, NSData;

@interface SearchRingBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *queryContent;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) NSData *udfbuf;

+ (void)initialize;

@end
