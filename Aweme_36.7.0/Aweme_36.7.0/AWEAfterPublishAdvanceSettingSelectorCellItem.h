@class NSString, UIImage, NSNumber;

@interface AWEAfterPublishAdvanceSettingSelectorCellItem : NSObject <AWEAfterPublishAdvanceSettingItemProtocol>

@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *settingKey;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *naviTitle;
@property (copy, nonatomic) NSString *introText;
@property (nonatomic) BOOL shouldHideLineView;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (nonatomic) BOOL controlEnabled;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL isCommentPermissionItem;
@property (retain, nonatomic) NSNumber *commentPermission;
@property (nonatomic) BOOL isDanmakuPermissionItem;
@property (retain, nonatomic) NSNumber *danmakuPermission;
@property (nonatomic) BOOL isClicking;
@property (nonatomic) BOOL isCommentProtectionModeItem;
@property (retain, nonatomic) NSNumber *commentProtectionMode;
@property (nonatomic) BOOL selectedState;
@property (nonatomic) BOOL switcherState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
