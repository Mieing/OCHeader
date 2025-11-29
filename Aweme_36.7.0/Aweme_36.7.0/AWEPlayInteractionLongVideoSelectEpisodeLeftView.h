@class NSString, UIImageView, AWEAwemeModel, UILabel, NSAttributedString, UITapGestureRecognizer;

@interface AWEPlayInteractionLongVideoSelectEpisodeLeftView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSAttributedString *attrTips;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *selectTypeLabel;
@property (nonatomic) BOOL isHalfStyle;
@property (copy, nonatomic) id /* block */ selectPanelActionBlock;

+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEPlayInteractionLongVideoSelectEpisodeLeftElementAdapterClass;

- (void)layoutSubviews;
- (id)aAWEPlayInteractionAdapter;
- (Class)largeFontAdaptUtilClass;
- (BOOL)enableAdaptLargeFontMode;
- (void)updateWithModel:(id)a0 context:(id)a1;
- (BOOL)enableAdaptLargeFontModeV3;
- (void)onSelectPanelClicked:(id)a0;
- (id)aAWEPlayInteractionLongVideoSelectEpisodeLeftElementAdapter;
- (void)updateBackgroundColorIfNeed;
- (double)selectImageLeftPadding;
- (double)selectImageViewSize;
- (void)updateIconImageIfNeed;
- (double)selectTypeLabelFontV3;
- (void)updateToHalfButtonStyle:(BOOL)a0;
- (void)addTapGesture;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
