@class AWEVideoPublishViewModel, NSString, AWEAwemeModel;

@interface AWEStoryPermissionContext : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) long long privacySettingScene;
@property (nonatomic) long long permissionPanelTheme;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) id /* block */ selectPrivacyBlock;

+ (id)contextForGlobalSetting;
+ (id)contextAfterPublish:(id)a0 scene:(long long)a1;
+ (id)contextBeforePublish:(id)a0 scene:(long long)a1 permissionPanelTheme:(long long)a2;
+ (id)contextAfterPublish:(id)a0 scene:(long long)a1 permissionPanelTheme:(long long)a2;
+ (id)contextBeforePublish:(id)a0 scene:(long long)a1;

- (void).cxx_destruct;

@end
