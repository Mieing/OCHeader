@class NSString, NSNumber;

@interface IESLiveInteractAudienceSettingItem : IESLiveDynamicModel

@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *disableToast;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompts;
@property (copy, nonatomic) NSString *valueText;
@property (nonatomic) int key;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (copy, nonatomic) id /* block */ valueTextTransform;
@property (copy, nonatomic) id /* block */ didUpdateCallback;

- (void)didClickSettingSwitch:(id)a0;
- (void)chooseSetting;
- (void)showDisabledToast;
- (void).cxx_destruct;

@end
