@class AWEFeedStandardLabelConfigModel, AWEPlayInteractionTagMultiAvatarView, UIImageView, NSString, UILabel, UIColor, AWEURLModel;

@interface AWEPlayInteractionGeneralTagView : UIView

@property (retain, nonatomic) AWEPlayInteractionTagMultiAvatarView *multiAvatarView;
@property (nonatomic) unsigned long long tagViewType;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *afterTextLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (nonatomic) double contentWidth;
@property (copy, nonatomic) NSString *labelTextColor;
@property (copy, nonatomic) NSString *labelBackgroundColor;
@property (retain, nonatomic) AWEURLModel *backgroundImageURL;
@property (retain, nonatomic) AWEFeedStandardLabelConfigModel *feedStandardUIConfig;
@property (copy, nonatomic) NSString *preferredAfterTextString;
@property (copy, nonatomic) NSString *attachMsgContent;
@property (retain, nonatomic) UIColor *tagBackgroundColor;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (nonatomic) unsigned long long avatarCount;

- (id)p_getAttributeStringWithText:(id)a0 font:(id)a1 color:(id)a2;
- (id)p_generateAttributeStringWithAttributeString:(id)a0 font:(id)a1 color:(id)a2 trailString:(id)a3 maxWidth:(double)a4;
- (id)initPlayInteractionTagsViewWithType:(unsigned long long)a0;
- (void)configWithFeedRelationLabel:(id)a0 andLeftContainerWidth:(double)a1 withMaxAvatarCount:(unsigned long long)a2 withRightIcon:(BOOL)a3;
- (void).cxx_destruct;
- (id)labelFont;
- (void)setupUI;

@end
