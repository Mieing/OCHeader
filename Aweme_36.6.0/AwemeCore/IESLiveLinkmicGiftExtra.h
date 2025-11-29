@class IESLiveGiftCommentWallInfo, IESLiveOrderInteractActingGift;

@interface IESLiveLinkmicGiftExtra : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveGiftCommentWallInfo *giftCommentWallInfo;
@property (nonatomic) BOOL hasGiftCommentWallInfo;
@property (retain, nonatomic) IESLiveOrderInteractActingGift *orderInteractActingGift;
@property (nonatomic) BOOL hasOrderInteractActingGift;

+ (id)descriptor;

@end
