@class FinderJumpInfo_NativeInfo, NSString, FinderJumpInfo_Html5Info, NSData, FinderJumpInfo;

@interface MMFinderLiveBannerInfo : NSObject

@property (nonatomic) unsigned long long bizType;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int reportSwitch;
@property (nonatomic) unsigned int reportNewCgi;
@property (nonatomic) unsigned int jumpinfoType;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) FinderJumpInfo_Html5Info *html5Info;
@property (retain, nonatomic) FinderJumpInfo_NativeInfo *nativeInfo;
@property (nonatomic) unsigned int supportShare;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) unsigned int extType;
@property (retain, nonatomic) NSData *extBuf;
@property (retain, nonatomic) FinderJumpInfo *oriJumpInfo;
@property (nonatomic) unsigned int activitySwitchDisplayInterval;
@property (retain, nonatomic) NSString *activityId;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionUrl;
@property (nonatomic) unsigned int remainClickTimes;

- (id)initWithJumpInfo:(id)a0;
- (id)initWithQuestActivityInfo:(id)a0;
- (void)copyFrom:(id)a0;
- (id)extInfoModel;
- (float)displayIntervalS;
- (BOOL)isMoreLiveBanner;
- (BOOL)isNotifyBanner;
- (BOOL)isAnchorTaskBanner;
- (BOOL)isSearchBanner;
- (BOOL)isGiftWallBanner;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualBanner:(id)a0;
- (id)bannerId;
- (void)reportRealTimeClick:(id)a0;
- (BOOL)updateSubTitleList:(id)a0;
- (BOOL)updateWithBannerInfo:(id)a0;
- (void).cxx_destruct;

@end
