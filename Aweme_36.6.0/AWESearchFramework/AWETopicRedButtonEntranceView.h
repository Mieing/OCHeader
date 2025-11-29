@class NSString, UIImageView, UILabel, UIView;

@interface AWETopicRedButtonEntranceView : AWEHotSpotPublishEntranceBaseView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *buttonIcon;
@property (retain, nonatomic) UILabel *buttonText;
@property (retain, nonatomic) UIView *bgView;
@property (copy, nonatomic) id /* block */ shortenAnimComplete;
@property (nonatomic) long long viewType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)excuteShortenAnimation:(double)a0 WithCompletion:(id /* block */)a1;
- (void)setupUIwithType:(long long)a0;
- (void)onShotClicked;
- (id)initWithType:(long long)a0 containerType:(long long)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)handlePress:(id)a0;
- (void)updateWithModel:(id)a0;

@end
