@class NSString, NSMutableArray;

@interface SilenceListResponse_ResponseExtra : IESLivePBBaseMessage

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (nonatomic) long long total;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSMutableArray *datasArray;
@property (readonly, nonatomic) unsigned long long datasArray_Count;
@property (copy, nonatomic) NSString *description_p;

+ (id)descriptor;

@end
