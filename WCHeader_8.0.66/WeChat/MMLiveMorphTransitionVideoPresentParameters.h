@class UIView;

@interface MMLiveMorphTransitionVideoPresentParameters : MMLiveMorphTransitionParameters

@property (nonatomic) BOOL targetHasBottomView;
@property (retain, nonatomic) UIView *micUserView;
@property (retain, nonatomic) UIView *micUserBackContainerView;
@property (retain, nonatomic) UIView *audioRoomView;
@property (nonatomic) BOOL hasScaledAudioRoomView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (nonatomic) unsigned long long transitionStyle;

- (void).cxx_destruct;

@end
