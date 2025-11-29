@class NSDictionary, BDPXPlaySingleSettingsApiConfigModel;

@interface BDPXPlaySingleSettingsModel : NSObject

@property (nonatomic) BOOL totalSwitch;
@property (retain, nonatomic) NSDictionary *appsConfig;
@property (nonatomic) BOOL iosNewLoadingIconShowSwitch;
@property (nonatomic) BOOL iosLandscapeAlbumPickerFixSwitch;
@property (nonatomic) BOOL iosToolbarSwitch;
@property (nonatomic) long long networkDialogFrequencyS;
@property (retain, nonatomic) BDPXPlaySingleSettingsApiConfigModel *apiConfigurableConfig;
@property (nonatomic) BOOL disableFeedCloudGame;
@property (nonatomic) BOOL disableXplaySnapshot;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
