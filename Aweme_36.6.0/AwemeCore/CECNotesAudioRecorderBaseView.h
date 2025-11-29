@class CECNotesAudioRecorderViewModel, NSString;

@interface CECNotesAudioRecorderBaseView : UIView <CECNotesAudioRecorderBaseViewProtocol>

@property (weak, nonatomic) CECNotesAudioRecorderViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)stopWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)willStopWorkWithLeftTime:(double)a0 preState:(unsigned long long)a1 currentState:(unsigned long long)a2;
- (void)increaseVolumeAnimation:(double)a0 currentTime:(double)a1;
- (void).cxx_destruct;
- (void)updateWithViewModel:(id)a0;

@end
