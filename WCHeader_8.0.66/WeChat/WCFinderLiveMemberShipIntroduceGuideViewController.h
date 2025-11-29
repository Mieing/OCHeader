@class MMFinderLiveContentVM, MMFinderLiveTask, MMFinderLiveMemberTipsFullScreenView;

@interface WCFinderLiveMemberShipIntroduceGuideViewController : MMUIViewController

@property (retain, nonatomic) MMFinderLiveContentVM *liveContentVM;
@property (retain, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) unsigned long long memberPrice;
@property (retain, nonatomic) MMFinderLiveMemberTipsFullScreenView *memberTipsFullScreenView;
@property (copy, nonatomic) id /* block */ becomeMemberConfirmCallback;

- (id)initWithFinderLiveContentVM:(id)a0 memberPrice:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutMemberTipsFullScreenView;
- (void).cxx_destruct;

@end
