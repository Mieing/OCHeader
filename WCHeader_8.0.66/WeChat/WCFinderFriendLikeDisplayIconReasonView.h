@class NSMutableArray, WCFinderSizingRichTextView, UIView;

@interface WCFinderFriendLikeDisplayIconReasonView : WCFinderFriendLikeDisplayBaseView

@property (retain, nonatomic) WCFinderSizingRichTextView *nickNameTextView;
@property (retain, nonatomic) WCFinderSizingRichTextView *appendTipsView;
@property (retain, nonatomic) UIView *avatorContainerView;
@property (retain, nonatomic) NSMutableArray *roundHeaderViews;

- (void)setUpUI;
- (void)updateWithViewModel:(id)a0;
- (void)layoutUIWithLikeInfoLeft:(double)a0;
- (void).cxx_destruct;

@end
