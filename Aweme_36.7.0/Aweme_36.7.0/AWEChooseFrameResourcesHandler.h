@class AWEStudioAwemeResourceModel, AWEStudioAwemeDownloadConfig, AWEVideoPublishViewModel, UIView, NSError;
@protocol ACCProcessViewProtcol;

@interface AWEChooseFrameResourcesHandler : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEStudioAwemeDownloadConfig *fetchAwemeConfig;
@property (retain, nonatomic) AWEStudioAwemeResourceModel *errorCollector;
@property (weak, nonatomic) UIView<ACCProcessViewProtcol> *loadingView;
@property (readonly, nonatomic) unsigned long long taskStatus;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL showLoadingView;
@property (retain, nonatomic) UIView *loadingViewContainerView;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithPublishModel:(id)a0;
- (void)fetchAwemeResources;
- (void)downloadAwemeMainResource:(id)a0;
- (void)configureLoadingView;
- (void)configVideoDecryptionKey:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
