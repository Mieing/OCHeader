@class NSString, HTSLiveStarGift, HTSLiveUser;

@interface HTSLiveStarwishGiftShowOrderItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (nonatomic) BOOL hasToUser;
@property (retain, nonatomic) HTSLiveStarGift *gift;
@property (nonatomic) BOOL hasGift;
@property (nonatomic) BOOL isLinkedUser;

+ (id)descriptor;

@end
