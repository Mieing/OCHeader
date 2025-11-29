@class NSString, NSNumber, UIImage;

@interface AWEAdvanceSettingActionItem : NSObject <AWEAdvanceSettingActionItemProtocol>

@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL shouldHideLineView;
@property (nonatomic) BOOL selectedState;
@property (nonatomic) BOOL controlEnabled;
@property (nonatomic) BOOL isCommentOption;
@property (nonatomic) BOOL isCommentOptionBeforePublish;
@property (nonatomic) BOOL isDanmakuOption;
@property (nonatomic) BOOL isDanmakuOptionBeforePublish;
@property (retain, nonatomic) NSNumber *danmakuPermission;
@property (nonatomic) BOOL isCommentProtectionModeOption;
@property (retain, nonatomic) NSNumber *commentProtectionMode;
@property (copy, nonatomic) NSString *describe;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (retain, nonatomic) NSNumber *commentPermission;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *introText;
@property (nonatomic) BOOL switcherState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
