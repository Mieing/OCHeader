@class WCDataItem, MFRItemReportInfo, NSString, NSMutableArray;

@interface MFRTimelineReportInfo : NSObject

@property (retain, nonatomic) MFRItemReportInfo *currentItemReportInfo;
@property (readonly, nonatomic) NSMutableArray *exposureItemReportInfos;
@property (readonly, nonatomic) NSMutableArray *unexposureItemReportInfos;
@property (nonatomic) unsigned long long finderRecommendationDisplayedCount;
@property (nonatomic) unsigned long long finderRecommendationClickedCount;
@property (nonatomic) BOOL isFirstEnteringTimeline;
@property (copy, nonatomic) NSString *timelineSessionID;
@property (retain, nonatomic) WCDataItem *badgeDataItem;
@property (retain, nonatomic) WCDataItem *lastDisplayedDataItem;
@property (nonatomic) unsigned long long missReadDisplayedCount;
@property (nonatomic) unsigned long long missReadClickedCount;
@property (readonly, nonatomic) unsigned long long currentSessionIndex;

- (id)init;
- (void)beginNewSession:(BOOL)a0;
- (void)endLastSession;
- (id)generateUnexposureInfo;
- (void).cxx_destruct;

@end
