@class UIImageView, UILabel, MASConstraint, UIView;

@interface AWEUserHomeShakeButton : UIButton

@property (nonatomic) BOOL reminded;
@property (nonatomic) BOOL canBeUrged;
@property (nonatomic) BOOL enableOnlyShake;
@property (retain, nonatomic) UIView *iconBackGroundView;
@property (retain, nonatomic) MASConstraint *completeImageViewRightConstraint;
@property (retain, nonatomic) MASConstraint *detailLableRightConstraint;
@property (nonatomic) unsigned long long shakeButtonType;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *completeImageView;
@property (retain, nonatomic) UIImageView *iconImageView;

- (id)_countToString:(long long)a0;
- (void)changeToRead;
- (void)updateUrgeAnchorIconImageWithImageURL:(id)a0;
- (void)changeToUrgeAnchor:(BOOL)a0 buttonText:(id)a1 imageURL:(id)a2 canBeUrged:(BOOL)a3;
- (void)changeToReminded:(BOOL)a0;
- (void)changeToWaitingForUrge:(BOOL)a0;
- (void)updateUnreadStyle:(BOOL)a0;
- (void)changeToUnreadWithText:(long long)a0 animated:(BOOL)a1;
- (void)updateButtonType:(unsigned long long)a0;
- (void)_commontInitWithType:(unsigned long long)a0;
- (void)layoutReminderDefault;
- (void)layoutCreatorDefault;
- (void)layoutSplitScreenDefault;
- (void)clearReminderDefaultLayout;
- (void)clearCreatorDefaultLayout;
- (void)clearSplitScreenDefaultLayout;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
