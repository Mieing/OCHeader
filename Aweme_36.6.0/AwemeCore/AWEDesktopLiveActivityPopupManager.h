@class AWEDesktopLiveActivityPopupViewModel, NSString;

@interface AWEDesktopLiveActivityPopupManager : NSObject <AWEDesktopSystemPopupGuideActionDelegateProtocol>

@property (retain, nonatomic) AWEDesktopLiveActivityPopupViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showLiveActivityAskViewWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
