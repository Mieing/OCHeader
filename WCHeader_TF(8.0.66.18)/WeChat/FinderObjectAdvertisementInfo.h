@class NSString, FinderJumpInfo, NSMutableArray;

@interface FinderObjectAdvertisementInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned long long aid;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *reportExtraData;
@property (nonatomic) unsigned long long adType;
@property (nonatomic) unsigned long long originalObjectid;
@property (retain, nonatomic) FinderJumpInfo *accountJumpInfo;
@property (retain, nonatomic) NSMutableArray *jumpInfoList;
@property (retain, nonatomic) NSString *adPosId;
@property (nonatomic) BOOL hiddenAdsIcon;
@property (nonatomic) BOOL showAdsIcon;
@property (nonatomic) BOOL hiddenFeedBottomCarousel;
@property (nonatomic) BOOL needSessionReportAdInfo;
@property (nonatomic) unsigned int adsIconShowDuration;
@property (nonatomic) BOOL showAdsIconLive;

+ (void)initialize;

- (void)setShowAdsIconLive:(BOOL)a0;
- (BOOL)showAdsIconLive;
- (void)setAdsIconShowDuration:(unsigned int)a0;
- (unsigned int)adsIconShowDuration;
- (void)setNeedSessionReportAdInfo:(BOOL)a0;
- (BOOL)needSessionReportAdInfo;
- (void)setHiddenFeedBottomCarousel:(BOOL)a0;
- (BOOL)hiddenFeedBottomCarousel;
- (void)setShowAdsIcon:(BOOL)a0;
- (BOOL)showAdsIcon;
- (void)setHiddenAdsIcon:(BOOL)a0;
- (BOOL)hiddenAdsIcon;
- (void)setAdPosId:(id)a0;
- (id)adPosId;
- (void)setJumpInfoList:(id)a0;
- (id)jumpInfoList;
- (void)setAccountJumpInfo:(id)a0;
- (id)accountJumpInfo;
- (void)setOriginalObjectid:(unsigned long long)a0;
- (unsigned long long)originalObjectid;
- (void)setAdType:(unsigned long long)a0;
- (unsigned long long)adType;
- (void)setReportExtraData:(id)a0;
- (id)reportExtraData;
- (void)setUxinfo:(id)a0;
- (id)uxinfo;
- (void)setAid:(unsigned long long)a0;
- (unsigned long long)aid;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;

@end
