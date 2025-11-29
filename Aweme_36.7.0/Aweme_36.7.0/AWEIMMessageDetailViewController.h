@class UIView, NSString, UIPinchGestureRecognizer, AWEIMMessage, BDImageView, YYLabel, LOTAnimationView, UIScrollView;

@interface AWEIMMessageDetailViewController : UIViewController <AWEIMMessageDetailTransitionOuterContextProvider>

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) YYLabel *messageTextLabel;
@property (retain, nonatomic) BDImageView *giphyImageView;
@property (retain, nonatomic) LOTAnimationView *liteEmojiAnimationView;
@property (nonatomic) double lastScale;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__dismiss;
- (void)__setupWithTextMessage:(id)a0;
- (void)__setupWithQuoteMessageV2:(id)a0;
- (void)__setupWithPublishAtFriendMessage:(id)a0;
- (void)__setupWithGiphyMessage:(id)a0;
- (void)__setupWithShanMengMessage:(id)a0;
- (void)__setupWithReplyShareLiveMessage:(id)a0;
- (void)__setupWithGroupChainMessage:(id)a0;
- (id)__normalAttributedStringWithText:(id)a0;
- (void)__setupWithAttributedString:(id)a0;
- (void)__handelTapliteEmojiWithGesture:(id)a0;
- (void)__handlePinchWithGesture:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithMessage:(id)a0;

@end
