@class WCFinderMention, WCFinderInteractionLabelGroupView, UIView, NSString, WCFinderLikeInfo, RichTextView, WCFinderThanksButton, WCFinderHeadImageView, UILabel;
@protocol WCFinderAggregatedMentionCellDelegate;

@interface WCFinderAggregatedMentionCell : UITableViewCell <WCFinderThanksButtonDelegate, WCFinderThanksExt>

@property (retain, nonatomic) WCFinderMention *mention;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) RichTextView *nicknameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) WCFinderInteractionLabelGroupView *nicknameTailLabel;
@property (retain, nonatomic) WCFinderInteractionLabelGroupView *bottomInteractLabel;
@property (retain, nonatomic) WCFinderThanksButton *thanksButton;
@property (retain, nonatomic) WCFinderLikeInfo *likeInfo;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) double layoutWidth;
@property (weak, nonatomic) id<WCFinderAggregatedMentionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setupUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thanksIconFrame;
- (id)accessibilityLabel;
- (void)updateWithMention:(id)a0;
- (void)updateThanksButtonUI;
- (id)getDisplayNameWithUsername:(id)a0 nickName:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)nicknameMinWidth;
- (void)onThanksButtonClickedWithThanksState:(BOOL)a0;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)a0;
- (void)onThankStateChanged:(BOOL)a0 tid:(id)a1 username:(id)a2 interactionType:(int)a3;
- (void).cxx_destruct;

@end
