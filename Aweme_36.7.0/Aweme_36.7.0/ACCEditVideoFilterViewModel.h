@class AWERecordFilterSwitchManager, RACSignal, RACSubject, NSString, UIViewController;
@protocol AWETabFilterViewControllerProtocol, ACCPanelViewProtocol;

@interface ACCEditVideoFilterViewModel : ACCEditViewModel <ACCEditVideoFilterServiceProtocol>

@property (retain, nonatomic) AWERecordFilterSwitchManager *filterSwitchManager;
@property (retain, nonatomic) RACSignal *applyFilterSignal;
@property (retain, nonatomic) RACSubject *applyFilterSubject;
@property (nonatomic) BOOL forceClose;
@property (copy, nonatomic) id /* block */ handleClearFilterBlock;
@property (copy, nonatomic) id /* block */ handleTransformSlotFilterToGlobalWithProject;
@property (copy, nonatomic) id /* block */ handleTransformGlobalFilterToSlotWithWithProject;
@property (copy, nonatomic) id /* block */ handleTransformTrackFilterToGlobalWithProject;
@property (copy, nonatomic) id /* block */ handleTransformGlobalFilterToTrackWithWithProject;
@property (copy, nonatomic) id /* block */ applyFilter;
@property (retain, nonatomic) UIViewController<AWETabFilterViewControllerProtocol, ACCPanelViewProtocol> *filterViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePanGestureEnabled:(BOOL)a0;
- (BOOL)isSwitchFilter;
- (void)panSwitchFilter:(id)a0;
- (void)clearColorFilter;
- (void)finishCurrentSwitchProcess;
- (void)transformSlotFilterToGlobalWithProject:(id)a0;
- (void)transformTrackFilterToGlobalWithProject:(id)a0;
- (void)transformGlobalFilterToSlotWithWithProject:(id)a0;
- (void)transformGlobalFilterToTrackWithWithProject:(id)a0;
- (void)applyFilter:(id)a0 indensity:(float)a1 isGlobal:(BOOL)a2;
- (id)tabFilterViewController;
- (void)forceCloseSwitch:(BOOL)a0;
- (void)sendAppleFilterToSubscribers;
- (void).cxx_destruct;
- (void)dealloc;

@end
