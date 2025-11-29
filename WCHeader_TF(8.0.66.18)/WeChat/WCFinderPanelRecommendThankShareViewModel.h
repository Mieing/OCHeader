@class FinderObjectThankInfo, NSString, WCFinderPanelRecommendThankShareReportModel;

@interface WCFinderPanelRecommendThankShareViewModel : NSObject

@property (retain, nonatomic) FinderObjectThankInfo *rawData;
@property (copy, nonatomic) NSString *tid;
@property (readonly, nonatomic) NSString *nameString;
@property (nonatomic) BOOL hadThanked;
@property (readonly, nonatomic) NSString *thankTips;
@property (retain, nonatomic) WCFinderPanelRecommendThankShareReportModel *report;

+ (id)modelWithInfo:(id)a0 tid:(id)a1;

- (void).cxx_destruct;

@end
