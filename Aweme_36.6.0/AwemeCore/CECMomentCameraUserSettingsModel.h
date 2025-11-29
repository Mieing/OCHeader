@class UIImage, NSString;

@interface CECMomentCameraUserSettingsModel : NSObject

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) id /* block */ switchBlock;

+ (id)autoSaveWhenPublishSettingModel;
+ (id)saveWithPolaroidSettingModel;
+ (id /* block */)p_goToSystemSettingBlock;
+ (id)autoSaveWhenPublishExchangeSettingModel;

- (void).cxx_destruct;

@end
