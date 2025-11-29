@class RACSignal, NSString, RACSubject;
@protocol ACCRecordSwitchModeService;

@interface ACCRecordCloseViewModel : ACCRecorderViewModel <ACCRecordCloseService>

@property (retain, nonatomic) RACSubject *manullyClickCloseButtonSuccessfullyCloseSubject;
@property (retain, nonatomic) RACSignal *manullyClickCloseButtonSuccessfullyCloseSignal;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
