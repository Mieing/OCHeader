@class UIFont, DUXTextTag, NSArray, AWEConcernFansLabelView, NSString, NSAttributedString, UIButton, AWEUserNameLabel, UILabel, UIColor;

@interface AWERelationListNameLabel : UIView

@property (retain, nonatomic) AWEUserNameLabel *title;
@property (retain, nonatomic) UILabel *relationTagLabel;
@property (retain, nonatomic) AWEConcernFansLabelView *fansLabelView;
@property (retain, nonatomic) UIButton *editAliasButton;
@property (retain, nonatomic) DUXTextTag *specialFollowTag;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL showEditButton;
@property (nonatomic) unsigned long long enlargeType;
@property (retain, nonatomic) UIFont *aliasButtonFont;
@property (retain, nonatomic) UIFont *relationTagFont;
@property (copy, nonatomic) id /* block */ editButtonClickBlock;

+ (Class)aAWEBrandColorAdapterClass;

- (void)setRelationTag:(id)a0;
- (id)aAWEBrandColorAdapter;
- (void)prepareReuse;
- (void)configWithFansTagArray:(id)a0;
- (void)showVerificationIcon:(id)a0 font:(id)a1;
- (void)setNameTitleTraitButton:(BOOL)a0;
- (void)updateSpecialFollowStatus:(long long)a0;
- (void)_layoutComponents;
- (void)p_clickEditAliasButton;
- (void).cxx_destruct;
- (id)init;
- (id)initWithScale:(double)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
