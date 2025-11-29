@class AWEMultiAvatarView, NSString, UIView, AWEFeedStandardLabelConfigModel, UIImageView, AWEURLModel, AWEGradientView, UILabel;
@protocol AFDFriendRecommendTagViewProtocol;

@interface AWEFeedRelationView : UIView <AWEFeedRelationViewProtocol>

@property (retain, nonatomic) AWEMultiAvatarView *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) UIView *verticalSeperateLine;
@property (nonatomic) double contentWidth;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWEGradientView *gradientBackgroundView;
@property (retain, nonatomic) UILabel *afterTextLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UIView<AFDFriendRecommendTagViewProtocol> *friendRecommendTagView;
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;
@property (nonatomic) BOOL isFamiliar;
@property (nonatomic) BOOL isNoFeedTag;
@property (copy, nonatomic) NSString *labelTextColor;
@property (copy, nonatomic) NSString *labelBackgroundColor;
@property (retain, nonatomic) AWEURLModel *backgroundImageURL;
@property (copy, nonatomic) NSString *backgroundImageStretchPositionX;
@property (retain, nonatomic) AWEFeedStandardLabelConfigModel *feedStandardUIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)view;

- (void)layoutSubviews;
- (BOOL)isActiveOfView:(id)a0;
- (void)configWithRelationDynamicLabel:(id)a0 awemeModel:(id)a1;
- (void)configFriendRecommendTagWithModel:(id)a0;
- (void)configWithShareReflow:(id)a0;
- (void)configUnreadMentionTagWithModel:(id)a0;
- (void)configWithLLMLabel:(id)a0;
- (void)configWithFeedRelationLabel:(id)a0 isFeedStandard:(BOOL)a1;
- (void)configWithLabelType:(long long)a0 labelInfo:(id)a1 awemeModel:(id)a2 isFeedStandard:(BOOL)a3;
- (void)configSchoolCircleTagWithRelationDynamicLabel:(id)a0;
- (void)configWithLabelType:(long long)a0 labelInfo:(id)a1 awemeModel:(id)a2;
- (void)configPrivacyStatusTagWithText:(id)a0 icon:(id)a1 needIcon:(BOOL)a2;
- (void)configWithRelationDynamicLabel:(id)a0 specialLabelInfo:(id)a1 recommendTemplate:(id)a2 isNewFriendsStyle:(BOOL)a3 awemeModel:(id)a4 isFeedStandard:(BOOL)a5;
- (void)configWithRelationDynamicLabel:(id)a0 awemeModel:(id)a1 isFeedStandard:(BOOL)a2;
- (void)configWithFeedRelationLabel:(id)a0;
- (void)resetAndUpdateRelationViewWithStyle:(long long)a0;
- (id)afterTextFromType:(long long)a0 count:(long long)a1;
- (BOOL)dynamicLabelTypeFilterForFeedStandrad:(long long)a0;
- (void)p_configWithShowType:(long long)a0 isFeedStandard:(BOOL)a1;
- (double)normalIconSizeWH;
- (double)normalArrowSizeWH;
- (double)avatarSizeWH;
- (void)updateTextFontIfNeededForLabel:(id)a0 withAvatarShow:(BOOL)a1;
- (void)configWithRelationDynamicLabel:(id)a0 specialLabelInfo:(id)a1 recommendTemplate:(id)a2 isNewFriendsStyle:(BOOL)a3 awemeModel:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
