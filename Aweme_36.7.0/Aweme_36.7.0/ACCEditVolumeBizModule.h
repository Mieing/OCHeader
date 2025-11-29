@class AWEVideoPublishViewModel;
@protocol ACCBusinessInputData, ACCEditServiceProtocol, IESServiceProvider;

@interface ACCEditVolumeBizModule : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCBusinessInputData> inputData;

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)setup;

@end
