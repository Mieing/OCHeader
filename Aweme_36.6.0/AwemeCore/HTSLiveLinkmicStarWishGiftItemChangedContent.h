@class NSString;

@interface HTSLiveLinkmicStarWishGiftItemChangedContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) int type;

+ (id)descriptor;

@end
