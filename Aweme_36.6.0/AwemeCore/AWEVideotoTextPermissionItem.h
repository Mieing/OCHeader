@class NSString, UIImage, AWEAwemeModel, NSNumber;

@interface AWEVideotoTextPermissionItem : NSObject <AWEAfterPublishAdvanceSettingItemProtocol>

@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL shouldHideLineView;
@property (nonatomic) BOOL switcherState;
@property (nonatomic) BOOL controlEnabled;
@property (retain, nonatomic) NSNumber *danmakuPermission;
@property (retain, nonatomic) NSNumber *commentProtectionMode;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (retain, nonatomic) NSNumber *commentPermission;
@property (copy, nonatomic) NSString *introText;
@property (nonatomic) BOOL selectedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneTypeForTrack;
- (void)onSwitherToggled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)postVideotoTextPermissionSetting:(long long)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
