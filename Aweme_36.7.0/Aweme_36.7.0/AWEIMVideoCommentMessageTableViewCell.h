@class NSString, CAShapeLayer, UIView, AWEIMRefreshImageView, YYLabel;

@interface AWEIMVideoCommentMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMFeedVideoMsgUnavailableStatusUpdatesObserver>

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (retain, nonatomic) AWEIMRefreshImageView *videoCoverImageView;
@property (retain, nonatomic) YYLabel *commentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (void)initialize;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)bubbleShapeView;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)p_updateBubbleLayer;
- (void)videoCoverTapped:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getDrawFrameForImage:(id)a0;
- (void)didUpdateUnavailableStatusForMessage:(id)a0;
- (void)didUpdateContentTitleForMessage:(id)a0 itemID:(id)a1;
- (void)didEditContentTitleForMessage:(id)a0;
- (id)p_getDisplayNickname;
- (id)p_stringWithString:(id)a0 font:(id)a1 linkTapAction:(id /* block */)a2 commonTapAction:(id /* block */)a3;
- (id)textColorWithMessage:(id)a0;
- (id)highlightBGColorWithMessage:(id)a0;
- (id)highlightColorWithMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (id)contentAttributedString;
- (void)tapAction;

@end
