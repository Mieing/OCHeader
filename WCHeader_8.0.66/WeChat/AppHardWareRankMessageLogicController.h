@class NSString, AppHardWareRankMessageViewModel, MMUIViewController;

@interface AppHardWareRankMessageLogicController : NSObject <TextStatePublishViewControllerDelegate>

@property (retain, nonatomic) NSString *stateIconId;
@property (retain, nonatomic) NSString *stateDesc;
@property (nonatomic) long long step;
@property (nonatomic) unsigned long long cgiStartTime;
@property (retain, nonatomic) AppHardWareRankMessageViewModel *viewModel;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
