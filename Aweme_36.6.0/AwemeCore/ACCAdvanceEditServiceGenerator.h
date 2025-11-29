@class NSString, IESServiceProvider, ACCAdvanceEditViewModel, AWEVideoPublishViewModel;

@interface ACCAdvanceEditServiceGenerator : NSObject <ACCAdvanceEditServiceInjectProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) ACCAdvanceEditViewModel *viewModel;
@property (weak, nonatomic) IESServiceProvider *normalServiceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
