@class NSString, NSData, FinderLiveGift;

@interface FinderLiveGetGiftDetailResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *packageId;
@property (retain, nonatomic) FinderLiveGift *gift;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSData *rewardExtInfo;

+ (void)initialize;

@end
