@class NSString, NSData, FinderLiveGift;

@interface FinderLiveSyncRecommendUserSendGiftInfoResp : WXPBGeneratedMessage

@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) FinderLiveGift *gift;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSData *ctx;

+ (void)initialize;

@end
