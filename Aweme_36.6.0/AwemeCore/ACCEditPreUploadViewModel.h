@class AWEVideoPublishViewModel, NSString, AWEPublishBaseTask;
@protocol AWEPublishTaskBusinessProtocol, ACCSequenceEditServiceProtocol, IESServiceProvider, ACCEditServiceProtocol;

@interface ACCEditPreUploadViewModel : NSObject <ACCEditPreUploadViewModelProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) AWEPublishBaseTask<AWEPublishTaskBusinessProtocol> *preUploadTask;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL hasCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)bindServices:(id)a0;
- (void)reStartEditPreUploadWithParams:(id)a0;
- (void)startEditPreUploadWithParams:(id)a0;
- (BOOL)cancelPreUploadIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
