@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetHistoryLiveListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *liveInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int startTimeRange;
@property (nonatomic) unsigned int endTimeRange;
@property (nonatomic) unsigned int totalCount;

+ (void)initialize;

@end
