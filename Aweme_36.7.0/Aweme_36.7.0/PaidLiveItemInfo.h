@class NSString;

@interface PaidLiveItemInfo : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (nonatomic) int itemType;
@property (copy, nonatomic) NSString *itemIdStr;

+ (id)descriptor;

@end
