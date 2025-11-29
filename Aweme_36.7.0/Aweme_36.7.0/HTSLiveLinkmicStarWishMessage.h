@class HTSLiveCommon, HTSLiveLinkmicStarWishOpenContent, HTSLiveLinkmicStarWishUpdateContent, HTSLiveLinkmicStarWishCloseContent, HTSLiveLinkmicStarWishGiftItemChangedContent;

@interface HTSLiveLinkmicStarWishMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkmicStarWishOpenContent *openContent;
@property (retain, nonatomic) HTSLiveLinkmicStarWishCloseContent *closeContent;
@property (retain, nonatomic) HTSLiveLinkmicStarWishUpdateContent *updateContent;
@property (retain, nonatomic) HTSLiveLinkmicStarWishGiftItemChangedContent *giftItemChangedContent;

+ (id)descriptor;

@end
