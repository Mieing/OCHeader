@class BaseRequest, NSString;

@interface GetFinderAuthorRingBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int offset;

+ (void)initialize;

@end
