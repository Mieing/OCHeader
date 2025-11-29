@class NSData, NSMutableArray, BaseResponse;

@interface FinderLiveGetReservedNoticeListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *reservedRecordList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;

+ (void)initialize;

@end
