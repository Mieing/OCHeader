@class NSArray, MJShootBubbleSwitch, NSString;
@protocol MJShootCountdownTimerSwitchDelegate;

@interface MJShootCountdownTimerSwitch : MMUIView <MJShootBubbleSwitchDelegate>

@property (nonatomic) unsigned long long selectedMode;
@property (retain, nonatomic) NSArray *switchItems;
@property (retain, nonatomic) MJShootBubbleSwitch *bubbleSwitch;
@property (weak, nonatomic) id<MJShootCountdownTimerSwitchDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMode:(unsigned long long)a0;
- (void)setupViews;
- (void)bubbleSwitch:(id)a0 didSwitchToIndex:(long long)a1;
- (long long)indexForMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
