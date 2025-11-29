@interface HTSLiveGiftCommentMetaContent : IESLivePBBaseMessage

@property (nonatomic) BOOL isActivate;
@property (nonatomic) long long giftId;
@property (nonatomic) long long playId;

+ (id)descriptor;

@end
