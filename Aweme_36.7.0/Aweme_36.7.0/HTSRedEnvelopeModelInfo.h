@class NSString, NSArray, HTSLiveImage, RushLuckyBoxResponse_GiftGuide, NSNumber, LuckyBoxResult;

@interface HTSRedEnvelopeModelInfo : IESLiveDynamicModel

@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL isLucky;
@property (nonatomic) BOOL isSurpriseGift;
@property (nonatomic) double remainTime;
@property (nonatomic) long long remainTimeCount;
@property (retain, nonatomic) NSNumber *userFollowed;
@property (nonatomic) long long grabedDiamond;
@property (retain, nonatomic) HTSLiveImage *image;
@property (retain, nonatomic) NSString *giftName;
@property (retain, nonatomic) NSNumber *giftID;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *grabedUsers;
@property (retain, nonatomic) NSArray *caijingVoucherArray;
@property (retain, nonatomic) NSString *voucherName;
@property (nonatomic) long long validEndDatetime;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) RushLuckyBoxResponse_GiftGuide *giftGuide;
@property (nonatomic) BOOL isConsumed;
@property (nonatomic) BOOL isTimeOut;
@property (nonatomic) BOOL isGrabed;
@property (nonatomic) BOOL isCaijingVoucher;
@property (nonatomic) BOOL isDressTimeout;
@property (retain, nonatomic) NSString *dressId;
@property (nonatomic) unsigned long long resultStatus;
@property (retain, nonatomic) LuckyBoxResult *resultData;
@property (nonatomic) BOOL isOpenResult;
@property (nonatomic) BOOL isHitBonus;
@property (retain, nonatomic) NSNumber *giftCount;

- (void).cxx_destruct;

@end
