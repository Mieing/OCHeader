@class TorchCert;

@interface MMFinderLiveOlympicsOperationViewModel : NSObject

@property (nonatomic) unsigned long long participateButtonOperation;
@property (nonatomic) unsigned long long certificateId;
@property (nonatomic) unsigned long long participantCount;
@property (retain, nonatomic) TorchCert *torchCert;

- (id)init;
- (void)observeKeyPath:(id)a0 callbackBlock:(id /* block */)a1;
- (void)unobserveAll;
- (void).cxx_destruct;

@end
