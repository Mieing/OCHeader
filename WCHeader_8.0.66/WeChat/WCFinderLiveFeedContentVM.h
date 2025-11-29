@class NSString, NSArray, FinderLiveStreamCard, FinderBannerExtInfo, FinderLiveRelatedExtInfo;

@interface WCFinderLiveFeedContentVM : WCFinderFeedContentVM

@property (copy, nonatomic) NSString *sortID;
@property (retain, nonatomic) FinderLiveStreamCard *liveStreamCard;
@property (retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo;
@property (retain, nonatomic) NSString *objectWording;
@property (copy, nonatomic) NSArray *cardFeedArray;
@property (retain, nonatomic) FinderBannerExtInfo *bannerExtInfo;

- (id)initWithLiveStreamCard:(id)a0 scene:(int)a1 dataScene:(id)a2;
- (void)setupWithLiveCard:(id)a0;
- (void)setupContentDatas:(id)a0;
- (void).cxx_destruct;

@end
