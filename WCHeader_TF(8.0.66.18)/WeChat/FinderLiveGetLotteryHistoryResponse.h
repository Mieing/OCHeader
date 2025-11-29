@class FinderLotteryLiveRecordList, NSData, BaseResponse;

@interface FinderLiveGetLotteryHistoryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLotteryLiveRecordList *liveList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned long long liveId;

+ (void)initialize;

@end
