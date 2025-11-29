@class NSString, NSMutableArray;

@interface VisibleStatusFullUpdateData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *updateFailedUidListArray;
@property (readonly, nonatomic) unsigned long long updateFailedUidListArray_Count;
@property (retain, nonatomic) NSMutableArray *cancelFailedUidListArray;
@property (readonly, nonatomic) unsigned long long cancelFailedUidListArray_Count;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *errMsg;

+ (id)descriptor;

@end
