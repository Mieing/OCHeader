@class BizRecentReadSmallItemViewModel;

@interface RecentReadReportItem : NSObject

@property (retain, nonatomic) BizRecentReadSmallItemViewModel *viewModel;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) int actionType;

- (void).cxx_destruct;

@end
