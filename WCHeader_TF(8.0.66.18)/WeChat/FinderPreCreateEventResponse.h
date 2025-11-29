@class FinderEventInfo, BaseResponse;

@interface FinderPreCreateEventResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long eventTopicId;
@property (retain, nonatomic) FinderEventInfo *eventInfo;

+ (void)initialize;

@end
