@class NSString, NSArray, AWENotificationSettingModel, AWEHalfScreenBaseViewController;

@interface AWEPushSettingsSubItemViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWENotificationSettingModel *settingModel;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEHalfScreenBaseViewController *actionSheetVC;
@property (nonatomic) BOOL inner;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL useCardUIStyle;

+ (Class)aAWEUserCenterIgnoreCommonAdapterClass;
+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;
+ (Class)aAWEPushSettingsAdapterClass;
+ (id)settingSearchRegisterDicForMessagePush;
+ (id)settingSearchRegisterDicForOrder;
+ (id)settingSearchRegisterDicForRecommend;
+ (id)settingSearchRegisterDicForOther;

- (void)presentHalfScreenVC:(id)a0 withView:(id)a1;
- (void)p_adaptiveLowVersionSystemWithVC:(id)a0 withView:(id)a1;
- (void)updatePushStatus;
- (void)trackShowWithPreviousPage:(id)a0 enterMethod:(id)a1;
- (id)createSectionDataArray;
- (id)generateSettingItemModelWithType:(long long)a0;
- (id)getPushStatus:(id)a0;
- (id /* block */)switchChangedBlockWithFieldType:(id)a0;
- (id)switchItemModelWithTitle:(id)a0 needIcon:(BOOL)a1 isSwitchOn:(BOOL)a2 isEnable:(BOOL)a3 hasLineView:(BOOL)a4 switchChangeBlock:(id /* block */)a5;
- (void)__uploadPushSettingWithType:(id)a0 subTypeField:(id)a1 toValue:(id)a2 reloadWhenFailed:(BOOL)a3;
- (void)resetPushStatus:(id)a0 pushType:(id)a1;
- (void)__statNotificationSettingValueAfterChangeWithField:(id)a0 subFieldType:(id)a1 toValue:(id)a2;
- (void)updatePushStatusWithCompleted:(id /* block */)a0;
- (id)initWithNotificationSettingModel:(id)a0 type:(long long)a1 inner:(BOOL)a2;
- (BOOL)needShowUrgeReply;
- (BOOL)shouldIgnoreNotice;
- (id)aAWEUserCenterIgnoreCommonAdapter;
- (id)__liveActivityNotificationSettingItemModel;
- (id)pushTypeToProperty;
- (id)liveActivityDetailText;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (id)aAWEPushSettingsAdapter;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
