@interface HTSLiveRelaxLiveHistoryExtra : IESLivePBBaseMessage

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (nonatomic) BOOL hideAllHistory;

+ (id)descriptor;

@end
