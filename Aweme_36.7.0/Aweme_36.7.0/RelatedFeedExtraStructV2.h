@class NSString, DouyinSelectAbConf, RelatedVideoHotspotInfo, DouyinSelectRelatedFeedExtra;

@interface RelatedFeedExtraStructV2 : GPBMessage

@property (copy, nonatomic) NSString *respFrom;
@property (nonatomic) BOOL hasRespFrom;
@property (copy, nonatomic) NSString *filterReason;
@property (nonatomic) BOOL hasFilterReason;
@property (copy, nonatomic) NSString *placer;
@property (nonatomic) BOOL hasPlacer;
@property (copy, nonatomic) NSString *sortExtra;
@property (nonatomic) BOOL hasSortExtra;
@property (retain, nonatomic) RelatedVideoHotspotInfo *hotspot;
@property (nonatomic) BOOL hasHotspot;
@property (copy, nonatomic) NSString *diversionTitle;
@property (nonatomic) BOOL hasDiversionTitle;
@property (copy, nonatomic) NSString *diversionTitleUninstall;
@property (nonatomic) BOOL hasDiversionTitleUninstall;
@property (retain, nonatomic) DouyinSelectRelatedFeedExtra *douyinSelectExtra;
@property (nonatomic) BOOL hasDouyinSelectExtra;
@property (copy, nonatomic) NSString *clientMonitor;
@property (nonatomic) BOOL hasClientMonitor;
@property (retain, nonatomic) DouyinSelectAbConf *abConf;
@property (nonatomic) BOOL hasAbConf;

+ (id)descriptor;

@end
