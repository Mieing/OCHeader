@class NSString, HTSLiveImage, HTSLiveUser;

@interface HTSLiveOrderSingItemV2 : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *orderUser;
@property (nonatomic) BOOL hasOrderUser;
@property (retain, nonatomic) HTSLiveUser *giftSender;
@property (nonatomic) BOOL hasGiftSender;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) int microphoneType;
@property (nonatomic) long long giftId;
@property (nonatomic) long long giftDiamondCount;
@property (retain, nonatomic) HTSLiveImage *orderSingGiftIcon;
@property (nonatomic) BOOL hasOrderSingGiftIcon;
@property (nonatomic) int giftType;
@property (nonatomic) BOOL needHideMvIcon;

+ (id)descriptor;

@end
