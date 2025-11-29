@class NSString;

@interface CloseGroupRankListReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int groupLiveType;
@property (nonatomic) int audienceRankStatus;

+ (id)descriptor;

@end
