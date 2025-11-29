@class NSString, FinderLiveGift;

@interface MMFinderLiveRewardFreeGift : NSObject

@property (retain, nonatomic) FinderLiveGift *gift;
@property (nonatomic) unsigned int isUsed;
@property (nonatomic) unsigned long long expireTime;
@property (retain, nonatomic) NSString *giftId;
@property (nonatomic) BOOL isLocalInserted;

+ (id)createFromPBGiftInfo:(id)a0;

- (void).cxx_destruct;

@end
