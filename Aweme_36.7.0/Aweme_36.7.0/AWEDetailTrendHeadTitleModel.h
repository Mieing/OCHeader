@class NSString, AWEHotTrendsLabelModel, AWEURLModel;

@interface AWEDetailTrendHeadTitleModel : AWEDetailCommonDiffableModel

@property (copy, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) NSString *subTitleString;
@property (copy, nonatomic) NSString *titleString;
@property (nonatomic) long long userCount;
@property (nonatomic) BOOL isHotTrend;
@property (nonatomic) BOOL hasTrendIcon;
@property (nonatomic) BOOL hasTrendDescription;
@property (retain, nonatomic) AWEHotTrendsLabelModel *hotLabel;

- (void).cxx_destruct;

@end
