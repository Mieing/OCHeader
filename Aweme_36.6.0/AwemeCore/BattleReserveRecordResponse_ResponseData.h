@class NSString, NSMutableArray;

@interface BattleReserveRecordResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *recordListArray;
@property (readonly, nonatomic) unsigned long long recordListArray_Count;
@property (copy, nonatomic) NSString *nextOffsetId;
@property (nonatomic) BOOL isEnd;

+ (id)descriptor;

@end
