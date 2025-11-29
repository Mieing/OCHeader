@class NSString, NSMutableArray;

@interface AnchorLinkmicRecordsResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *recordsArray;
@property (readonly, nonatomic) unsigned long long recordsArray_Count;
@property (copy, nonatomic) NSString *nextOffset;
@property (nonatomic) BOOL hasMoreRecord;

+ (id)descriptor;

@end
