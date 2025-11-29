@class NSData, NSMutableArray, BaseResponse;

@interface FinderLiveGetPrizeHistoryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recordList;
@property (retain, nonatomic) NSMutableArray *liveRecordList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
