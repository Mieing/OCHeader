@class NSDictionary, NSArray;
@protocol IESIMConversationProtocol;

@interface AWEIMNewerHalfScreenMuteSettingsViewModel : NSObject

@property (retain) id<IESIMConversationProtocol> con;
@property (copy) NSDictionary *extraParams;
@property (copy) NSArray *muteSettingsCellViewModels;

- (id)initWithCon:(id)a0 extraParams:(id)a1;
- (void)vc_viewDidLoad;
- (BOOL)__enableFoldChatOption;
- (void)didSwitchWithCurrentSetting:(id)a0;
- (void)__setupDataSource;
- (id)muteTaskWithShouldMute:(BOOL)a0;
- (id)foldTaskWithShouldFold:(BOOL)a0;
- (void)__executeUpdateMuteSettingsNotification;
- (void).cxx_destruct;

@end
