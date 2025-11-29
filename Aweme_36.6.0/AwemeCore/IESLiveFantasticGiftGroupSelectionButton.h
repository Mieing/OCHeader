@class NSArray, UIImageView, LOTAnimationView, UILabel, UIView, GiftGroupInfo;

@interface IESLiveFantasticGiftGroupSelectionButton : IESLiveButton

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *comboImageView;
@property (retain, nonatomic) NSArray *largeRipples;
@property (retain, nonatomic) UIView *largeRippleContainer;
@property (retain, nonatomic) LOTAnimationView *ripple;
@property (retain, nonatomic) LOTAnimationView *environment;
@property (retain, nonatomic) GiftGroupInfo *item;
@property (nonatomic) long long buttonState;
@property (nonatomic) long long nextLargeRippleIndex;
@property (copy, nonatomic) id /* block */ sendGift;
@property (copy, nonatomic) id /* block */ restoreBlock;
@property (nonatomic) long long index;

- (void)impact;
- (void)addLargeRipple;
- (void)cleanLargeRipples;
- (void)active;
- (void).cxx_destruct;
- (void)inactive;
- (void)reset;
- (id)initWithItem:(id)a0;
- (void)setupUI;

@end
