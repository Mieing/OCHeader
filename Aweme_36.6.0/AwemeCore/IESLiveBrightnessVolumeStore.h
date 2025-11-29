@class NSString;
@protocol IESLiveBrightnessVolumReaction;

@interface IESLiveBrightnessVolumeStore : NSObject <IESLiveScreenLockActions, IESLiveBrightnessVolumeActions> {
    id /* block */ _autoDismiss;
}

@property (nonatomic, getter=isScreenLock) BOOL screenLock;
@property (nonatomic) long long type;
@property (nonatomic) double value;
@property (nonatomic, getter=isAdjusting) BOOL adjusting;
@property (weak, nonatomic) id<IESLiveBrightnessVolumReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)unlockScreen;
- (void)beginAdjusting:(long long)a0;
- (void)endAdjusting;
- (id /* block */)createAutoDismissTask;
- (void).cxx_destruct;
- (id)init;
- (void)lockScreen;
- (void)updateValue:(double)a0;

@end
