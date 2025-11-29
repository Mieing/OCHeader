@class NSMutableArray, PicStats;

@interface WCFinderFeedContentReportModel : NSObject

@property (nonatomic) BOOL hasShowInHotArea;
@property (retain, nonatomic) NSMutableArray *jumpInfoReportList;
@property (retain, nonatomic) PicStats *picStat;

- (void).cxx_destruct;

@end
