@class DUXBottomNotification, AWEVideoDraftBoxCollectionViewController, AWEVideoDraftBoxCollectionDataSource;
@protocol AWEVideoDraftBoxCollectionBottomNotificationDelegate;

@interface AWEVideoDraftBoxCollectionBottomNotificationHandler : NSObject

@property (weak, nonatomic) AWEVideoDraftBoxCollectionViewController *vc;
@property (weak, nonatomic) AWEVideoDraftBoxCollectionDataSource *dataSource;
@property (retain, nonatomic) DUXBottomNotification *bottomNotification;
@property (retain, nonatomic) DUXBottomNotification *bottomCleanTipsNotification;
@property (nonatomic) BOOL bottomNotificationAppeared;
@property (nonatomic) BOOL isSensitiveUserTips;
@property (nonatomic) BOOL isRequesting;
@property (readonly, nonatomic) DUXBottomNotification *bottomCleanTipsNofification;
@property (weak, nonatomic) id<AWEVideoDraftBoxCollectionBottomNotificationDelegate> delegate;
@property (readonly, nonatomic) BOOL hasClosedCleanTips;

- (void)recordCleanDraftTipHasAppearedToday;
- (void)showDraftCleanTipsInBottom;
- (void)getDraftsSizeAndFreeDiskSpace:(id /* block */)a0;
- (id)initWithDraftVC:(id)a0 dataSource:(id)a1;
- (void)updateEditingState:(BOOL)a0;
- (void)showBottomCleanTipsViewFromUserClean;
- (void).cxx_destruct;
- (BOOL)timeLimit;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)feedBack;
- (void)deleteSelected;
- (void)viewWillDisappear;

@end
