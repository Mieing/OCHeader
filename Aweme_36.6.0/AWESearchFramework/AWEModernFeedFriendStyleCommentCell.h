@class YYLabel, AWEFriendStyleCommentCellFrame, NSString;

@interface AWEModernFeedFriendStyleCommentCell : AWEFriendStyleBaseCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) YYLabel *authorLabel;
@property (retain, nonatomic) YYLabel *moreLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) AWEFriendStyleCommentCellFrame *commentCellFrame;
@property (copy, nonatomic) id /* block */ highlightTapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapContainerView:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isInsStyle:(BOOL)a2;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
