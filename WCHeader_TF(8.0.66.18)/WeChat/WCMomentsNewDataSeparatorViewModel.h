@class WCDataItem, NSString, WCMomentsFinderRecommendationViewModel;

@interface WCMomentsNewDataSeparatorViewModel : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) double width;
@property (readonly, nonatomic) double maxContentWidth;
@property (readonly, copy, nonatomic) NSString *tipsText;
@property (readonly, nonatomic) WCMomentsFinderRecommendationViewModel *finderRecommendationViewModel;

+ (id)viewModelWithDataItem:(id)a0;

- (id)initWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
