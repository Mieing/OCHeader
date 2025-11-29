@class BaseRequest, NSString;

@interface SnsTagOptionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned long long tagId;
@property (retain, nonatomic) NSString *tagName;

+ (void)initialize;

@end
