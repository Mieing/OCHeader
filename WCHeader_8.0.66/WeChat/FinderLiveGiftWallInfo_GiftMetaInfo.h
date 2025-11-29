@class NSString, FinderJumpInfo;

@interface FinderLiveGiftWallInfo_GiftMetaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *giftId;
@property (nonatomic) unsigned long long targetCount;
@property (nonatomic) unsigned long long curCount;
@property (retain, nonatomic) FinderJumpInfo *audienceBoard;
@property (retain, nonatomic) NSString *topOneHeadImg;
@property (retain, nonatomic) NSString *giftImg;
@property (retain, nonatomic) NSString *giftName;
@property (nonatomic) unsigned int liveIdentity;

+ (void)initialize;

@end
