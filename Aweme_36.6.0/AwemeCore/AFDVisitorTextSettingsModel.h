@class NSString;

@interface AFDVisitorTextSettingsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *noVisitorHintTitle;
@property (copy, nonatomic) NSString *noVisitorHintContent;
@property (copy, nonatomic) NSString *profileVisitorDialogHintTitle;
@property (copy, nonatomic) NSString *profileVisitorDialogHintContent;
@property (copy, nonatomic) NSString *profileVisitorDialogHintSwitch;
@property (copy, nonatomic) NSString *offNoVisitorHintTitle;
@property (copy, nonatomic) NSString *offNoVisitorHintContent;
@property (copy, nonatomic) NSString *offNoVisitorHintAction;
@property (copy, nonatomic) NSString *offHasVisitorHintTitle;
@property (copy, nonatomic) NSString *offHasVisitorHintContent;
@property (copy, nonatomic) NSString *offHasVisitorHintAction;
@property (copy, nonatomic) NSString *rightTitleText;
@property (copy, nonatomic) NSString *bottomEmptyHint;
@property (copy, nonatomic) NSString *profileVisitorExperimentCloseToast;
@property (copy, nonatomic) NSString *offHintTitle;
@property (copy, nonatomic) NSString *offHintContent1;
@property (copy, nonatomic) NSString *offHintContent2;
@property (copy, nonatomic) NSString *offHintContent3;
@property (copy, nonatomic) NSString *offActionCloseButtonTitle;
@property (copy, nonatomic) NSString *offActionOpenButtonTitle;
@property (copy, nonatomic) NSString *offActionCloseToastTitle;
@property (copy, nonatomic) NSString *offHintHTSGreetTitle;
@property (copy, nonatomic) NSString *offHintContent4;
@property (copy, nonatomic) NSString *v2TitleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
