@class NSString, HTSLiveImage;

@interface HTSLiveAddTimeGiftSimpleInfo : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (retain, nonatomic) HTSLiveImage *giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (nonatomic) long long count;
@property (nonatomic) long long addTime;
@property (copy, nonatomic) NSString *giftName;

+ (id)descriptor;

@end
