@class NSString, NSData, FinderLivePrizeAttendInfo;

@interface FinderLiveGiftMethod : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productImgUrl;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *skuName;
@property (retain, nonatomic) NSData *productJumpInfo;
@property (nonatomic) unsigned int attendDuration;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int expiredTime;
@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned long long skuId;
@property (nonatomic) unsigned long long settingFlag;
@property (retain, nonatomic) FinderLivePrizeAttendInfo *attendInfo;
@property (retain, nonatomic) NSString *giftId;

+ (void)initialize;

@end
