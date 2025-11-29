@class AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, IESServiceProvider, IESServiceRegister, ACCEditServiceProtocol;

@interface ACCPublishViewControllerInputData : ACCRepositoryWrapper

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> editorServiceContainer;

- (void).cxx_destruct;

@end
