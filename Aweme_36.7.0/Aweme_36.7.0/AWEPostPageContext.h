@class ACCPublishViewControllerInputData, NSString, AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel, NSNumber;
@protocol AWEPublishEditServiceManagerProtocol;

@interface AWEPostPageContext : ACCRepositoryWrapper <AWEPostPageContext>

@property (retain, nonatomic) AWEVideoPublishViewModel *originalModel;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (retain, nonatomic) ACCPublishViewControllerInputData *inputData;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (retain, nonatomic) NSNumber *dynamicyPrepareCanvasPublishAsImageFlagValue;
@property (readonly, nonatomic) AWEVideoPublishViewModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awesst_enterFrom;
- (id)commonTrackParams;
- (id)initWithInputData:(id)a0;
- (BOOL)isShowingLivePlaybackStyle;
- (void)updateUploadParamsCache:(id)a0;
- (void).cxx_destruct;

@end
