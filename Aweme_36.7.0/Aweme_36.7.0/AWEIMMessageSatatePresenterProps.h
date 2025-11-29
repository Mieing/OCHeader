@class AWEIMMsgStateViewModel;

@interface AWEIMMessageSatatePresenterProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMMsgStateViewModel *stateViewModel;
@property (copy, nonatomic) id /* block */ viewDidTappedBlock;
@property (nonatomic) BOOL showSendingProgress;
@property (nonatomic) double sendingProgress;

- (void).cxx_destruct;

@end
