@class NSString, FinderLiveFreeGiftInfo, NSMutableArray, FinderLiveGift;

@interface PackageGiftRecommendInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) FinderLiveGift *gift;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSMutableArray *batchList;
@property (nonatomic) unsigned int recommendType;
@property (retain, nonatomic) FinderLiveFreeGiftInfo *freeGiftInfo;

+ (void)initialize;

@end
