@class NSString;

@interface AWEGuideBindPhoneManager : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSString *kAWERequestKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)shouldShowDialog:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)needCheckBindStatus;
- (double)timeInterval:(id)a0;
- (BOOL)needBindPhone;
- (id)guideBindPhoneSettings;
- (BOOL)needForceBind;
- (void)showBindPhoneAlertDialog;
- (BOOL)shouldShowDialog:(id)a0;
- (void)showDialogWithType:(unsigned long long)a0;
- (void)trackGuideToBindPhoneNumberPopUp:(id)a0 alertType:(unsigned long long)a1;
- (id)keyWithUid:(id)a0;
- (BOOL)satisfyCommonConditions;
- (BOOL)frequencySatisfied:(id)a0;
- (double)timeIntervalWithKey:(id)a0;
- (void)setUpUserFilter;
- (void).cxx_destruct;
- (long long)integerValueForKey:(id)a0;
- (void)dealloc;

@end
