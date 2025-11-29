@class MMKV, NSArray, UIView, NSNumber;

@interface AWELongPressPanelFunctionTransferReminderViewModel : AWELongPressPanelBaseViewModel

@property (weak, nonatomic) UIView *animationView;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSNumber *firstDisplayTimeStamp;
@property (copy, nonatomic) NSArray *friendsArr;

+ (id)longPressPanelViewModel;

- (void)dismissAnimation;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (double)getCellHeight;
- (id)reminderRecord;
- (id)mmkvKeyForCloseRecord;
- (id)mmkvKeyForFirstDisplayRecord;
- (id)getTitleAttributedString;
- (void)dismissLongPressPanelAndShowSharePanel;
- (void)updateReminderRecordWithKey:(id)a0 value:(id)a1;
- (void)trackSharePanelShow;
- (void)showShareElementPopoverIfNeeded;
- (id)getAnimationView;
- (id)mmkvKeyForReminderRecord;
- (id)mmkvKeyForModuleId;
- (id)mmkvKeyForAnimationShow;
- (void)animationViewDidClick;
- (BOOL)checkShareElementPopoverShowStatus;
- (long long)lppShareButtonHintPopoverShowCount;
- (long long)lppShareButtonHintPopoverShowTimeInterval;
- (id)lppShareButtonHintPopoverShowConfig;
- (BOOL)needShow;
- (void)showSharePanel;
- (void).cxx_destruct;
- (id)moduleConfig;

@end
