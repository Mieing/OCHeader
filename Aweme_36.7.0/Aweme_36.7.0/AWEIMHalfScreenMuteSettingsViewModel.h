@class NSArray, RxPromise, NSDictionary;
@protocol IESIMConversationProtocol, AWEIMHalfScreenMuteSettingsDelegate;

@interface AWEIMHalfScreenMuteSettingsViewModel : NSObject

@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) RxPromise *ongoingRequestingPromise;
@property (nonatomic) BOOL currentAccountIsGroupOwner;
@property (copy) NSArray *muteSettingsViewModels;
@property (copy) NSArray *muteSettingsFiltersViewModels;
@property (copy) NSArray *didUpatedIndexs;
@property (nonatomic) long long mutingMask;
@property (nonatomic) BOOL isFolded;
@property double collectionViewHeight;
@property double collectionViewInsetHeight;
@property BOOL shouldDisplayMutingFilterEntry;
@property (weak, nonatomic) id<AWEIMHalfScreenMuteSettingsDelegate> delegate;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)initWithCon:(id)a0 extraParams:(id)a1;
- (void)vc_viewDidLoad;
- (void)didTapOnCloseBtn;
- (void)didSwitchToSetting:(id)a0;
- (void)didConfirmChangingFilter;
- (void)didCancelChangingFilter;
- (void)didSelectFilter:(id)a0;
- (void)__setupDataSource:(BOOL)a0;
- (BOOL)__enableFoldChatOption;
- (BOOL)__importantMessagesFiltingIsVisible;
- (void)__updateImportantMessagesOnlySubtitle:(id)a0;
- (void)__updateTypeMuteAnyMessagesSubtitle:(id)a0 isMutingAllMessages:(BOOL)a1;
- (id)__confirmChangeToMask:(long long)a0 __confirmChangeToSettingSwitch:(id)a1;
- (void)__requestUpdateToSettingMask:(long long)a0 foldStatus:(BOOL)a1;
- (void)p_trackMuteChangeWithMast:(long long)a0;
- (id)__commonTrackingParams;
- (void)__restoreToLocalCachedStatus;
- (void)__updateDataSourceWithMuteSettingsMask;
- (id)__trackStringMap;
- (void).cxx_destruct;

@end
