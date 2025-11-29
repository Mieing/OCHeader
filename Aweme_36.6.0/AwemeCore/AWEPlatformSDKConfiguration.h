@class NSString;

@interface AWEPlatformSDKConfiguration : BDPlatformSDKConfiguration

@property (copy, nonatomic) NSString *awe_stayCheckedImageName;
@property (copy, nonatomic) NSString *awe_checkedImageName;
@property (copy, nonatomic) NSString *awe_uncheckedImageName;
@property (copy, nonatomic) NSString *awe_defaultAppIconName;

- (id)stayCheckedImage;
- (void)setStayCheckedImage:(id)a0;
- (void)setDefaultAppIcon:(id)a0;
- (void).cxx_destruct;
- (id)checkedImage;
- (id)uncheckedImage;
- (void)setCheckedImage:(id)a0;
- (void)setUncheckedImage:(id)a0;
- (id)defaultAppIcon;

@end
