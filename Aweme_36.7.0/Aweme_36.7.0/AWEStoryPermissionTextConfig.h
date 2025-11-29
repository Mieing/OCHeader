@class NSString;

@interface AWEStoryPermissionTextConfig : AWEBaseSettingsModel

@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *shortText;
@property (copy, nonatomic) NSString *confirmDialogText;

+ (id)configWithValue:(long long)a0 text:(id)a1 shortText:(id)a2;
+ (id)configWithValue:(long long)a0 text:(id)a1 confirmDialogText:(id)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
