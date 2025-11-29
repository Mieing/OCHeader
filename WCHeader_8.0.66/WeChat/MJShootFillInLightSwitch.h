@class MJShootBubbleSwitch, NSArray, NSString;
@protocol MJShootFillInLightSwitchDelegate;

@interface MJShootFillInLightSwitch : MMUIView <MJShootBubbleSwitchDelegate>

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) MJShootBubbleSwitch *bubbleSwitch;
@property (retain, nonatomic) NSArray *switchItems;
@property (weak, nonatomic) id<MJShootFillInLightSwitchDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
