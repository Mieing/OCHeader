@class UILabel, UIImageView, AWERoundedBackgroundLabelView;

@interface AWEVideoPublishInputSuggestionTableViewHashTagCell : UITableViewCell

@property (retain, nonatomic) UILabel *labelName;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIImageView *historyView;
@property (retain, nonatomic) UIImageView *hotSpotView;
@property (retain, nonatomic) AWERoundedBackgroundLabelView *labelCount;
@property (retain, nonatomic) UILabel *labelCountLong;
@property (nonatomic) unsigned long long hashTagType;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;

- (void)showHotSpotViewWithModel:(id)a0;
- (void)showHotIcon;
- (void)showRecommendIcon;
- (void)showIconsNotInTyping:(id)a0;
- (void)updateChallengeCountView:(long long)a0 isFirst:(BOOL)a1 isNewTag:(BOOL)a2;
- (void)showIconsInTyping:(id)a0;
- (void)checkIfShowIcons:(id)a0;
- (void)setCounterNumber:(id)a0 isFirst:(BOOL)a1 isNewTag:(BOOL)a2;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)setupUI;

@end
