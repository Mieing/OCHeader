@class NSString, UIView;
@protocol IESLiveEZDanmakuViewProtocol, IESLiveEZDanmakuSpiritDelegate;

@interface IESLiveEZDanmakuSpirit : NSObject

@property (weak, nonatomic) id<IESLiveEZDanmakuSpiritDelegate> delegate;
@property (copy, nonatomic) NSString *viewClassName;
@property (copy, nonatomic) NSString *preferredDispatcherClassName;
@property (nonatomic) BOOL forceUsePreferredDispatcher;
@property (nonatomic) double baseDuration;
@property (nonatomic) double activateTime;
@property (nonatomic) double delayTime;
@property (readonly, nonatomic, getter=isActivated) BOOL activated;
@property (retain, nonatomic) UIView<IESLiveEZDanmakuViewProtocol> *danmakuView;
@property (retain, nonatomic) id danmakuViewModel;
@property (nonatomic) long long priority;

- (void)deactive;
- (void)updateWithTime:(double)a0;
- (void)activeWithContext:(id)a0;
- (BOOL)respondTouchPoint:(struct CGPoint { double x0; double x1; })a0 event:(id)a1;
- (void).cxx_destruct;

@end
