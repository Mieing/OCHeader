@class AWEMRSubscribeManageTracker, AWEMRSubscribeManageDataContext;

@interface AWEMRSubscribeManageViewModel : AWEMRSubscribeManageBaseViewModel

@property (retain, nonatomic) AWEMRSubscribeManageDataContext *dataContext;
@property (retain, nonatomic) AWEMRSubscribeManageTracker *tracker;

- (void)fetchListData;
- (void)updateSectionVMs;
- (void).cxx_destruct;

@end
