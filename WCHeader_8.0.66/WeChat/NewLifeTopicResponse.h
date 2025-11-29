@class NSMutableArray, BaseResponse;

@interface NewLifeTopicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *topics;

+ (void)initialize;

@end
