@class WCFinderSizingRichTextView, WCFinderFriendLikeViewSetupParams, NSMutableArray, UIView;

@interface WCFinderFriendLikeCustomInfoView : UIView

@property (retain, nonatomic) WCFinderFriendLikeViewSetupParams *params;
@property (retain, nonatomic) NSMutableArray *roundHeaderViews;
@property (retain, nonatomic) WCFinderSizingRichTextView *likeInfoTextView;
@property (retain, nonatomic) WCFinderSizingRichTextView *appendTisTextView;
@property (retain, nonatomic) UIView *avatorContainerView;

- (id)initWithParams:(id)a0;
- (void)setUpUI;
- (id)genFinderTextView;
- (void)updateWithContentVM:(id)a0;
- (id)getDisplayCommentInfo:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)generatorAvatorView:(id)a0 headUrl:(id)a1 headerViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
