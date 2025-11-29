@class NSString, AWENotificationSettingModel, NSArray;

@interface AWEMessagePushSettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWENotificationSettingModel *settingModel;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;

+ (id)settingSearchRegisterDic;

- (id)initWithNotificationSettingModel:(id)a0;
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
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
