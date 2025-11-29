@class NSString;

@interface AWEStoryPermissionDialogConfig : AWEBaseSettingsModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *positiveTitle;
@property (copy, nonatomic) NSString *negativeTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
