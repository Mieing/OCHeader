@class WCFinderCommentEmoticonView, MMUIButton, NSString, WCFinderFriendsHeaderSuffixView, UILabel, WCFinderComment, WCFinderCommentImageView;

@interface WCFinderFeedDetailCommentCell : UITableViewCell <ILinkEventExt, WCFinderCommentEmoticonViewDelegate, WCFinderCommentImageViewDelegate>

@property (retain, nonatomic) WCFinderCommentEmoticonView *emoticonView;
@property (retain, nonatomic) WCFinderCommentImageView *commentImageView;
@property (nonatomic) struct CGPoint { double x; double y; } beginTouchPoint;
@property (retain, nonatomic) UILabel *fromAILabel;
@property (retain, nonatomic) WCFinderComment *comment;
@property (nonatomic) BOOL isSelfPost;
@property (retain, nonatomic) WCFinderFriendsHeaderSuffixView *friendLikeSuffixView;
@property (retain, nonatomic) MMUIButton *recommendButton;
@property (retain, nonatomic) MMUIButton *handpickButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)recommendNameInfoHeightWithComment:(id)a0 width:(double)a1;
+ (double)emoticonContentHeightWithComment:(id)a0;
+ (double)imageContentHeightWithComment:(id)a0;
+ (double)topMarginOfFromAILabel;
+ (double)heightForFromAILabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setUpRecommendNameInfosView;
- (void)setUpRecommendButton;
- (void)setUpHandPickButton;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)clickRecommendFriendUsername:(id)a0;
- (void)showRecommendButtonAnimation;
- (void)clickRecommendAction;
- (void)clickFriendLikeAction;
- (void)recommendViewDataChange;
- (void)setupEmoticonViewIfNeeded;
- (void)setupCommentImageView;
- (id)emoticonReportDictWithComment:(id)a0;
- (void)updateEmoticonViewWithComment:(id)a0;
- (void)updateImageViewWithComment:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)forbidHightLightCell;
- (void)setupFromAILabel;
- (void)updateFromAILabelWithComment:(id)a0;
- (id)getRealCustomBackgroundColor;
- (void)finderCommentEmoticonView:(id)a0 didClickEmoticonView:(id)a1;
- (void)finderCommentEmoticonView:(id)a0 didLongPressEmoticonView:(id)a1;
- (id)finderCommentEmoticonViewGetFeedId;
- (void)finderCommentImageView:(id)a0 didClickWithComment:(id)a1;
- (id)finderCommentImageViewGetFeedId;
- (id)getCommentEventDelegate;
- (id)getFeedId;
- (int)getCommentListScene;
- (BOOL)showRecommendButton;
- (void)clickHandPickAction;
- (id)authorLikeLabelStr;
- (void).cxx_destruct;

@end
