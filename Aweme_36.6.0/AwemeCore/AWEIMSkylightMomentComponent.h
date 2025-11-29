@class NSString;
@protocol AFDSkylightMomentListControllerProtocol, AWEIMSkylightViewInterface;

@interface AWEIMSkylightMomentComponent : AWEIMComponentBase <AFDSkylightMomentListControllerDelegate, AWEIMSkylightMomentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AFDSkylightMomentListControllerProtocol> momentController;
@property (weak, nonatomic) id<AWEIMSkylightViewInterface> viewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (id)cf_transitionTargetView;
- (id)getMomentController;
- (void)skylightViewDidAppear;
- (long long)cf_cellIndexWithIndexPath:(id)a0;
- (id)cf_avatarViewWithCell:(id)a0;
- (void)cf_updateCloseFriendsEntranceWithSettingStatus:(BOOL)a0;
- (void)cf_updateSkylightViewLayout;
- (long long)showBubblePotentialMaxCount;
- (void).cxx_destruct;

@end
