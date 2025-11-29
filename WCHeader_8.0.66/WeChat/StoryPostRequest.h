@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface StoryPostRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *objDesc;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (nonatomic) unsigned int visiableSelfOnly;

+ (void)initialize;

@end
