@class NSString, FinderJumpInfo, MicSetting_PurchaseMicSetting;

@interface MMFinderLivePaidConnectMicServiceInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) double rating;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long price;
@property (nonatomic) unsigned long long currentWaitingUserCount;
@property (retain, nonatomic) FinderJumpInfo *ratingJumpInfo;
@property (retain, nonatomic) MicSetting_PurchaseMicSetting *correspondingMicSetting;

- (void).cxx_destruct;

@end
