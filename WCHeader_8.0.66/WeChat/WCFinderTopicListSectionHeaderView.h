@class UIView, WCFinderBriefCardView, MMWebImageView, FinderWordsTopicExtInfo, UIImageView, RichTextView, UILabel, MMUIButton;
@protocol WCFinderTopicListSectionHeaderViewDelegate;

@interface WCFinderTopicListSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) MMWebImageView *headerImageView;
@property (retain, nonatomic) UIView *wordContainer;
@property (retain, nonatomic) UIView *voiceOverView;
@property (retain, nonatomic) RichTextView *topicTitleLabel;
@property (retain, nonatomic) UILabel *topicSubTitleLabel;
@property (retain, nonatomic) UILabel *topicCountLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) WCFinderBriefCardView *musicBriefCard;
@property (retain, nonatomic) FinderWordsTopicExtInfo *wordsTopicExt;
@property (retain, nonatomic) MMUIButton *postBtn;
@property (retain, nonatomic) UIView *btnContainer;
@property (weak, nonatomic) id<WCFinderTopicListSectionHeaderViewDelegate> delegate;

+ (double)getTopicListSectionHeaderViewHeightWithTopicType:(int)a0 imageUrl:(id)a1 topicTitle:(id)a2 topicLocation:(id)a3 topicDetailLocation:(id)a4 topicCount:(unsigned long long)a5 totalWatchCount:(unsigned long long)a6 width:(double)a7 wordsTopicExt:(id)a8 optionParams:(id)a9;
+ (double)getFadeInStartOffsetWithTopicType:(int)a0 imageUrl:(id)a1 topicTitle:(id)a2 topicLocation:(id)a3 topicDetailLocation:(id)a4 topicCount:(unsigned long long)a5 totalWatchCount:(unsigned long long)a6;
+ (id)genTopicTitleWithType:(int)a0 topicTitle:(id)a1 topicLocation:(id)a2 showHighlightTopic:(BOOL)a3;
+ (id)generateBottomButtonWithSvgImageName:(id)a0 title:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (void)updateTopicType:(int)a0 imageUrl:(id)a1 topicTitle:(id)a2 topicLocation:(id)a3 topicDetailLocation:(id)a4 topicCount:(unsigned long long)a5 totalWatchCount:(unsigned long long)a6 wordsTopicExt:(id)a7 optionParams:(id)a8;
- (BOOL)needsShowLocationArrowWithType:(int)a0 topicLocation:(id)a1;
- (void)setupSubviews;
- (void)onClickPostAction;
- (void).cxx_destruct;

@end
