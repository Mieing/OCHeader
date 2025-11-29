@class AWEIMShareFeedCardView, UITapGestureRecognizer, AWEIMMediaView, UIView, AWEIMStory25ContentSideView;

@interface AWEIMStory25ContentView : UIView

@property (retain, nonatomic) AWEIMMediaView *mediaView;
@property (retain, nonatomic) AWEIMShareFeedCardView *cardView;
@property (retain, nonatomic) AWEIMStory25ContentSideView *topBackView;
@property (retain, nonatomic) AWEIMStory25ContentSideView *bottomBackView;
@property (retain, nonatomic) UIView *cardBgView;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (id)initWithProps:(id)a0;
- (void)p_setupSubviews:(id)a0;
- (id)p_setupBottomBackView:(id)a0;
- (id)p_setupTopBackView:(id)a0;
- (id)p_setupReplyMediaView:(id)a0;
- (id)p_setupFeedCardView:(id)a0;
- (void)p_coverDidTapped:(id)a0;
- (void).cxx_destruct;

@end
