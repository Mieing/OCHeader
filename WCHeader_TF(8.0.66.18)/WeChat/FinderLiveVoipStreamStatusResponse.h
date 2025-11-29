@class BaseResponse;

@interface FinderLiveVoipStreamStatusResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int reportInterval;

+ (void)initialize;

@end
