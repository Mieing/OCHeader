@interface OMJAssetInputSettings : NSObject

@property (nonatomic) long long camOSTMode;

- (struct SharedPtr<XCSMediaFileInputSettings> { struct XCSMediaFileInputSettings *x0; })createBackingSettings;

@end
