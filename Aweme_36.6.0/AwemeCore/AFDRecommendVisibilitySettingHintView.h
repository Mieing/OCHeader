@class UILabel, NSString;

@interface AFDRecommendVisibilitySettingHintView : UIView <AFDRecommendToFriendsVisibilitySwitchMessage>

@property (nonatomic) long long sceneType;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *settingLinkLabel;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })currentTextFrameWithWidth:(double)a0;
+ (id)hintLabelText;
+ (long long)fontClass;
+ (long long)fontWeight;

- (void)updateHintLabel;
- (id)initWithSceneType:(long long)a0 enterFrom:(id)a1;
- (void)updateRecommendToFriendsVisibility:(long long)a0;
- (void)setupUIForHideVisibleSettingEntrance;
- (id)trackerEnterMethod;
- (void)clickSettingLink;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
