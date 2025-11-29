@class NSString, AWEIMGeneralCardView;

@interface AWEIMShareLiveChannelMessageTableViewCell : AWEIMUserMessageTableViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEIMGeneralCardView *cardViewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)p_initSubviews;
- (id)gestureResponseViews;
- (void)updateLiveToUnExpected:(BOOL)a0;
- (void)liveCoverTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
