@class NSString;

@interface IESLiveLGameDuringLiveInfoCardModel : NSObject

@property (nonatomic) long long exposureCount;
@property (nonatomic) long long clickCount;
@property (nonatomic) long long playCount;
@property (copy, nonatomic) NSString *gameIconURL;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameDescription;
@property (nonatomic) unsigned long long explainStatus;
@property (nonatomic) BOOL hasLotteryGift;
@property (copy, nonatomic) NSString *lotteryGiftURL;
@property (nonatomic) unsigned long long instantPlayStatus;
@property (nonatomic) unsigned long long instantPlayOpenStatus;

+ (id)modelWithJson:(id)a0;

- (void)appendWithDuringLiveModel:(id)a0;
- (void)handleJson:(id)a0;
- (void).cxx_destruct;

@end
