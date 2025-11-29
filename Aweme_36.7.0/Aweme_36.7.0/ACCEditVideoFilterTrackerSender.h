@class NSString, RACSubject;

@interface ACCEditVideoFilterTrackerSender : ACCTrackerSender <ACCEditVideoFilterTrackSenderProtocol>

@property (retain, nonatomic) RACSubject *filterClickedSignal;
@property (retain, nonatomic) RACSubject *filterSwitchManagerCompleteSignal;
@property (retain, nonatomic) RACSubject *tabFilterControllerWillDismissSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
