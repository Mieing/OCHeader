@class AWEStudioAwemeResourceModel, AWEStudioAwemeDownloadConfig, AWEVideoPublishViewModel, UIView, NSError;
@protocol ACCProcessViewProtcol;

@interface AWEPublishAwemeResourcesHandler : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEStudioAwemeDownloadConfig *fetchAwemeConfig;
@property (retain, nonatomic) AWEStudioAwemeResourceModel *errorCollector;
@property (weak, nonatomic) UIView<ACCProcessViewProtcol> *loadingView;
@property (readonly, nonatomic) unsigned long long taskStatus;
@property (nonatomic) double requestStartTime;
@property (nonatomic) BOOL useMainResourceCache;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL showLoadingView;
@property (retain, nonatomic) UIView *loadingViewContainerView;
@property (copy, nonatomic) id /* block */ coverHandler;
@property (copy, nonatomic) id /* block */ mainResourceHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ requestConfig;

+ (void)integrateImageAlbumExportModel:(id)a0 toPublishModel:(id)a1;

- (id)initWithPublishModel:(id)a0;
- (void)fetchAwemeResources;
- (void)downloadAwemeMainResource:(id)a0;
- (void)configureLoadingView;
- (void)configVideoDecryptionKey:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
