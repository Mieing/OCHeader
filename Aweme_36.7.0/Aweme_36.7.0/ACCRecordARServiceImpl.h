@class NSString, RACSignal, AWEVideoRecorderARGestureDelegateModel, RACSubject;

@interface ACCRecordARServiceImpl : NSObject <ACCRecordARProvideProtocol, ACCRecordARService>

@property (retain, nonatomic) RACSignal *showARInputSignal;
@property (retain, nonatomic) RACSubject *showARInputSubject;
@property (retain, nonatomic) RACSignal *dismissARInputSignal;
@property (retain, nonatomic) RACSubject *dismissARInputSubject;
@property (retain, nonatomic) RACSignal *inputTextChangeSignal;
@property (retain, nonatomic) RACSubject *inputTextChangeSubject;
@property (retain, nonatomic) RACSignal *inputCompleteSignal;
@property (retain, nonatomic) RACSubject *inputCompleteSubject;
@property (retain, nonatomic) AWEVideoRecorderARGestureDelegateModel *arGesturesDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendSignalARInputShowWithMsg:(id)a0;
- (void)sendSignalARInputDismiss;
- (void)sendSignalWhenInputTextChanged:(id)a0 message:(id)a1;
- (void)sendSignalWhenInputComplete:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
