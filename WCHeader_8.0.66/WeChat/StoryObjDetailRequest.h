@class BaseRequest, NSString;

@interface StoryObjDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *userName;

+ (void)initialize;

@end
