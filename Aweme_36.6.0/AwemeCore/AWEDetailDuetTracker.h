@class NSString, AWEDetailDuetViewModel;

@interface AWEDetailDuetTracker : NSObject <AWEDetailTrackerService>

@property (retain, nonatomic) AWEDetailDuetViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEnterPersonalDetailWithModel:(id)a0;
- (void)trackDetailPageClientShowWithModel:(id)a0;
- (void)trackDetailPageExitWithMask;
- (void)trackDetailPagePullUp;
- (void)trackDetailPagePullDown;
- (id)initWithStateContext:(id)a0;
- (void)trackCollectActionWithCollectStatus:(BOOL)a0;
- (void)trackEnterDuetDetail;
- (void)trackDuetEntranceShow;
- (void)trackDuetEntranceClick;
- (void).cxx_destruct;

@end
