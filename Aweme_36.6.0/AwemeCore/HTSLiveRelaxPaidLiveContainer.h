@class NSString, NSMutableArray;

@interface HTSLiveRelaxPaidLiveContainer : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *paidLiveArray;
@property (readonly, nonatomic) unsigned long long paidLiveArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long maxTime;
@property (copy, nonatomic) NSString *lastTicketId;

+ (id)descriptor;

@end
