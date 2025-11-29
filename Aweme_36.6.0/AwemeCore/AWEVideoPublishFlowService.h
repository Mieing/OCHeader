@class AWEPublishTaskFlowHandle, AWEPublishModelFlowHandle, AWEVideoPublishViewModel, AWEPublishBaseTask, NSMutableDictionary, AWEPublishAlbumFlowHandle, AWEStudioPromise, AWEEditServiceFlowHandle, AWEPostPageUserDeclarationSheet, AWEResourceUploadParametersResponseModel, UIViewController, NSNumber;
@protocol AWEPublishEditServiceManagerProtocol, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEVideoPublishFlowService : NSObject {
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
}

@property (retain, nonatomic) AWEStudioPromise *promise;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (retain, nonatomic) AWEPublishModelFlowHandle *modelHandle;
@property (retain, nonatomic) AWEEditServiceFlowHandle *editServiceHandle;
@property (retain, nonatomic) AWEPublishTaskFlowHandle *taskHandle;
@property (retain, nonatomic) AWEPublishAlbumFlowHandle *albumHandle;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (retain, nonatomic) AWEPostPageUserDeclarationSheet *userDeclarationSheet;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL isPostPage;
@property (retain, nonatomic) NSNumber *isPrepareForCanvasPublishAsImageAlbumFlag;
@property (readonly, nonatomic) unsigned long long taskFlowType;
@property (nonatomic) long long triggerAdvanceSettingsClickSignal;

- (id)editService;
- (void)setEditService:(id)a0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)a0;
- (id)buildTask;
- (void)configTask;
- (id /* block */)addFlowAction;
- (id /* block */)doFlow;
- (void)resetWithTask:(id)a0;
- (void)setUseSequenceEditServiceWhenMerge;
- (void).cxx_destruct;
- (id /* block */)flow;

@end
