@class NLEInterface_OC, LVExporterManager, NSTimer, UIView, LVPlayer;
@protocol ACCLoadingViewProtocol, ACCProcessViewProtcol, ACCCutSameWorksManagerProtocol;

@interface AWECutSameRouterManager : NSObject

@property (retain, nonatomic) LVExporterManager *lvExportManager;
@property (retain, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *progressView;
@property (nonatomic) BOOL isCancel;
@property (retain, nonatomic) id<ACCCutSameWorksManagerProtocol> worksManager;
@property (retain, nonatomic) LVPlayer *player;
@property (copy, nonatomic) id /* block */ cutSameMVVideoProgressBlock;
@property (copy, nonatomic) id /* block */ cutSameMVVideoCompletion;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double count;

+ (id)errorWithResponse:(id)a0;
+ (id)sharedInstance;

- (void)resetManager;
- (void)fakeProgress;
- (id)fileURLWithString:(id)a0;
- (void)cancelCreateCutSameMVVideo;
- (void)handleCutSameMVVideoProgressBlock:(double)a0;
- (void)handleCutSameMVVideoCompletionWithPublishModel:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)startCutSameMVVideoWithTemplate:(id)a0 assetPathList:(id)a1 withInfo:(id)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)convertAssetPathToAssetModel:(id)a0;
- (BOOL)validDuration:(id)a0 assetModels:(id)a1;
- (void)createCutSameMVTemplateWithTemplateId:(id)a0 withInfo:(id)a1 completion:(id /* block */)a2;
- (void)createCutSameMVVideoWithTemplateId:(id)a0 assetPathList:(id)a1 withInfo:(id)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
