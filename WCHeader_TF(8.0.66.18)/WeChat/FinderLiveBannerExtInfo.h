@class NSString, NSMutableArray, FinderSideBarRelatedLivePrepareInfo;

@interface FinderLiveBannerExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned int needPreload;
@property (nonatomic) unsigned int backgroundSource;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) unsigned int activityId;
@property (retain, nonatomic) NSString *dynamicWording;
@property (retain, nonatomic) NSString *wordingColor;
@property (retain, nonatomic) NSString *buttonColor;
@property (nonatomic) BOOL disableShare;
@property (retain, nonatomic) NSString *backgroundGradientColor;
@property (nonatomic) unsigned int preloadInterval;
@property (nonatomic) unsigned int reportNewCgi;
@property (nonatomic) unsigned int reportSwitch;
@property (retain, nonatomic) NSMutableArray *subTitleList;
@property (retain, nonatomic) NSString *subIconUrl;
@property (nonatomic) unsigned int needCache;
@property (nonatomic) unsigned int preloadDelayMs;
@property (nonatomic) unsigned int displayIntervalMs;
@property (nonatomic) BOOL isShowSubIconPag;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *jumpNavliveBufferEncode;
@property (retain, nonatomic) FinderSideBarRelatedLivePrepareInfo *sideBarRelatedLivePrepareInfo;

+ (void)initialize;

- (BOOL)modelCustomTransformFromDictionary:(id)a0 forConfigTag:(id)a1;

@end
