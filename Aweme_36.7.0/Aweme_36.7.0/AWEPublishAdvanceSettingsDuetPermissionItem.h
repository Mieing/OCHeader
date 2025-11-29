@class UIImage, NSString, NSNumber;

@interface AWEPublishAdvanceSettingsDuetPermissionItem : NSObject <AWEPublishAdvanceSettingsItemProtocol>

@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *introText;
@property (copy, nonatomic) NSString *naviTitle;
@property (nonatomic) BOOL shouldHideLineView;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (retain, nonatomic) NSNumber *commentPermission;
@property (retain, nonatomic) NSNumber *danmakuPermission;
@property (nonatomic) BOOL controlEnabled;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *settingKey;
@property (nonatomic) BOOL switcherState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
