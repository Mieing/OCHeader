@class NSString, HTSLiveImage, HTSLiveInteractActingOrderInfo, HTSLiveInteractActingGiftContent;

@interface HTSLiveInteractActingBannerData : IESLivePBBaseMessage

@property (nonatomic) long long playId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int status;
@property (retain, nonatomic) HTSLiveImage *noUserOrderIcon;
@property (nonatomic) BOOL hasNoUserOrderIcon;
@property (copy, nonatomic) NSString *noUserOrderDesc;
@property (retain, nonatomic) HTSLiveImage *hasUserOrderIcon;
@property (nonatomic) BOOL hasHasUserOrderIcon;
@property (copy, nonatomic) NSString *hasUserOrderDesc;
@property (nonatomic) long long hasUserOrderShowDuration;
@property (retain, nonatomic) HTSLiveInteractActingOrderInfo *orderInfo;
@property (nonatomic) BOOL hasOrderInfo;
@property (retain, nonatomic) HTSLiveInteractActingGiftContent *giftContent;
@property (nonatomic) BOOL hasGiftContent;
@property (nonatomic) long long timestampMs;

+ (id)descriptor;

@end
