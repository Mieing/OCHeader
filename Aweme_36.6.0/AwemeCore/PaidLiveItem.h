@interface PaidLiveItem : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (nonatomic) int itemType;

+ (id)descriptor;

@end
