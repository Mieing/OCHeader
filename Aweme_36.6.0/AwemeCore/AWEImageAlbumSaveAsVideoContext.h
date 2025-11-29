@class UIView, NSString, NSArray, AWEVideoPublishViewModel, ACCImageAlbumData, ACCEditViewControllerInputData, AWEUserModel, AWEMusicModel, AWEPublishSaveToAlbumTaskHandle, AWEAwemeModel;
@protocol IESServiceRegister, IESServiceProvider, ACCMVTemplateManagerProtocol, ACCPublishMergeImageHelperProtocol, ACCProcessViewProtcol, ACCEditServiceProtocol;

@interface AWEImageAlbumSaveAsVideoContext : NSObject <ACCPublishServiceSaveAlbumDelegate>

@property (retain, nonatomic) ACCEditViewControllerInputData *inputData;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceContainer;
@property (copy, nonatomic) NSArray *imageAlbumList;
@property (retain, nonatomic) AWEUserModel *author;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) ACCImageAlbumData *inputImageAlbumData;
@property (retain, nonatomic) NSArray *imageInfos;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) BOOL isMultiAlbum;
@property (nonatomic) BOOL isFromEdit;
@property (nonatomic) BOOL isSilentTask;
@property (nonatomic) BOOL isMixedSlides;
@property (copy, nonatomic) id /* block */ updateSourceModel;
@property (retain, nonatomic) AWEMusicModel *music;
@property (copy, nonatomic) NSArray *localFilePaths;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ updateProgressHandler;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *sourcePublishModel;
@property (nonatomic) BOOL didFinished;
@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *progressView;
@property (nonatomic) double progress;
@property (copy, nonatomic) id /* block */ saveAlbumTaskDidFinishHandler;
@property (copy, nonatomic) id /* block */ saveAlbumTaskDidChangeProgressHandler;
@property (copy, nonatomic) id /* block */ saveAlbumTaskShouldStopHandler;
@property (retain, nonatomic) AWEPublishSaveToAlbumTaskHandle *saveAlbumTaskHandle;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCEditServiceProtocol> combinedEditService;
@property (retain, nonatomic) id<ACCMVTemplateManagerProtocol> mvTemplateManager;
@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveAlbumDidFinishWithError:(id)a0 extra:(id)a1;
- (void)didChangeProgress:(double)a0;
- (id)businessServiceContainer;
- (void)buildEditServiceContextIfNeed;
- (void)configInputDataForServiceContainer:(id)a0 inputData:(id)a1;
- (void).cxx_destruct;
- (void)clearContext;
- (void)dealloc;

@end
