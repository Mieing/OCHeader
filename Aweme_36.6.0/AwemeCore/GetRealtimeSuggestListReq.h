@interface GetRealtimeSuggestListReq : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) long long recSize;

+ (id)descriptor;

@end
