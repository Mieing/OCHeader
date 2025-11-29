@class NSString, NSMutableArray, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCEditorSmartBeautyBasicHandler : NSObject

@property (nonatomic) BOOL isProcessing;
@property (retain, nonatomic) NSMutableArray *callbackList;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, nonatomic) NSString *panelName;
@property (readonly, nonatomic) NSString *logCategory;

- (id)initWithPublishViewModel:(id)a0 serviceProvider:(id)a1;
- (BOOL)currentModelDownloaded;
- (BOOL)dataExist;
- (void)buildCurrentModelWithResponseModel:(id)a0;
- (void)downloadEffectResourceWithTrackInfo:(id)a0;
- (void)executeCallbacks:(id)a0 trackInfo:(id)a1;
- (id)toDownloadEffectModels;
- (void)checkEffectModelAndDownloadIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
