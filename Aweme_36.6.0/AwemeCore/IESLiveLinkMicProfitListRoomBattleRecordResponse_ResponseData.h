@class NSMutableArray;

@interface IESLiveLinkMicProfitListRoomBattleRecordResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *recordsArray;
@property (readonly, nonatomic) unsigned long long recordsArray_Count;
@property (nonatomic) BOOL hasMore;

+ (id)descriptor;

@end
