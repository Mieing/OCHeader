@class NSString;

@interface AWELongPressPanelSeverViewModel : AWELongPressPanelBaseViewModel <AFDFriendsActionViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowFriendsWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)longPressPanelViewModel;

- (void)longPressFriendsAction;
- (void)confirmButtonDidClicked;
- (void)linkLabelDidTapped;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)guideShowCountStorageKey;
- (void)trackRemoveFriendsEventWithTrackType:(unsigned long long)a0;
- (BOOL)needShow;

@end
