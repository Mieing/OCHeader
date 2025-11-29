@class AWEVideoPublishViewModel, NSString, RACSubject;

@interface ACCFilterTrackerSender : ACCTrackerSender <ACCFilterTrackSenderProtocol>

@property (retain, nonatomic) RACSubject *filterViewWillShowSignal;
@property (retain, nonatomic) RACSubject *filterViewWillDisappearSignal;
@property (retain, nonatomic) RACSubject *filterSlideSwitchCompleteSignal;
@property (retain, nonatomic) RACSubject *filterSlideSwitchStartSignal;
@property (copy, nonatomic) id /* block */ getPublishModelBlock;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendFilterViewWillShowSignal;
- (void)sendFilterSlideSwitchCompleteSignal:(id)a0;
- (void)sendFilterViewWillDisappearSignalWithFilter:(id)a0;
- (void)sendFilterSlideSwitchStartSignal;
- (void).cxx_destruct;

@end
