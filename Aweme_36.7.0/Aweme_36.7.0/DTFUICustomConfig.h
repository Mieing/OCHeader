@class DTFGuideConfig, DTFFaceConfig;

@interface DTFUICustomConfig : NSObject

@property (retain, nonatomic) DTFGuideConfig *guideConfig;
@property (retain, nonatomic) DTFFaceConfig *faceConfig;

+ (void)checkKeyFaultWithDict:(id)a0 propertyName:(id)a1 settingFailReason:(id)a2;
+ (id)checkValueFailt:(id)a0 key:(id)a1;
+ (id)base64ImageKeyArray;
+ (id)pathImageKeyArray;
+ (id)setValueForKeyWithClass:(id)a0 params:(id)a1;
+ (id)getImageWithBse64:(id)a0 path:(id)a1;
+ (id)submitLoadingIcon;
+ (id)titleCloseIcon;
+ (id)noticeIcon;
+ (id)titleBackIcon;

- (id)initWithString:(id)a0 type:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
