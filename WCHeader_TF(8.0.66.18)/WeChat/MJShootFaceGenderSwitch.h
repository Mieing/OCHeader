@class NSArray, MJShootBubbleSwitch, NSString;
@protocol MJShootFaceGenderSwitchDelegate;

@interface MJShootFaceGenderSwitch : MMUIView <MJShootBubbleSwitchDelegate>

@property (nonatomic) long long selectedFaceGender;
@property (retain, nonatomic) NSArray *switchItems;
@property (retain, nonatomic) MJShootBubbleSwitch *bubbleSwitch;
@property (readonly, nonatomic) unsigned long long bizScene;
@property (weak, nonatomic) id<MJShootFaceGenderSwitchDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFaceGender:(long long)a0 bizScene:(unsigned long long)a1;
- (void)setupViews;
- (void)bubbleSwitch:(id)a0 didSwitchToIndex:(long long)a1;
- (long long)indexForFaceGender:(long long)a0;
- (void).cxx_destruct;

@end
