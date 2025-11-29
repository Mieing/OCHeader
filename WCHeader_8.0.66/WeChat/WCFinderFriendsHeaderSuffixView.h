@class WCFinderSizingRichTextView, NSString, UIColor, UIView;

@interface WCFinderFriendsHeaderSuffixView : UIView

@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) WCFinderSizingRichTextView *likeInfoTextView;
@property (retain, nonatomic) WCFinderSizingRichTextView *appendTisTextView;
@property (copy, nonatomic) NSString *svgImageColor;
@property (retain, nonatomic) UIColor *titleColor;

- (id)init;
- (void)setUpUI;
- (void)updateCommentRecommendFriendList:(id)a0 width:(double)a1;
- (id)getHeadImageViewWithContact:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
