@class BaseResponse;

@interface ServiceTimelineConfirmResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int useTimeline;

+ (void)initialize;

- (void)setUseTimeline:(unsigned int)a0;
- (unsigned int)useTimeline;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
