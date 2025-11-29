@class NSString, BaseResponse;

@interface FinderGetAIMediaResultResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *photoUrl;
@property (nonatomic) unsigned int queryInterval;
@property (nonatomic) unsigned int queryMaxTimes;

+ (void)initialize;

@end
