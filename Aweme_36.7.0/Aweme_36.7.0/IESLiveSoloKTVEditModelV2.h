@class IESSoloKTVVideoEditManager, NSArray, IESSoloKTVDraftMainModel, IESLiveSoloKTVTemplateSwitchModel, IESLiveSoloKTVMVListModel, IESSoloKTVResourceManager, NSDictionary, IESLiveSoloKTVApi;

@interface IESLiveSoloKTVEditModelV2 : NSObject

@property (retain, nonatomic) IESSoloKTVVideoEditManager *editManager;
@property (retain, nonatomic) IESSoloKTVResourceManager *resourceManager;
@property (retain, nonatomic) IESLiveSoloKTVApi *api;
@property (retain, nonatomic) IESSoloKTVDraftMainModel *draftModel;
@property (retain, nonatomic) IESLiveSoloKTVTemplateSwitchModel *templateModel;
@property (retain, nonatomic) IESLiveSoloKTVMVListModel *mvModel;
@property (retain, nonatomic) NSArray *selectedAsset;
@property (retain, nonatomic) NSDictionary *trackParam;
@property (nonatomic) long long sessionId;
@property (nonatomic) BOOL notFirstShowPanel;
@property (nonatomic) double pageStartTime;
@property (nonatomic) BOOL notFirstClick;

- (void)requestAllList:(id /* block */)a0 videoCompletion:(id /* block */)a1;
- (void)assetCopyToDraft:(id)a0 completion:(id /* block */)a1;
- (void)generateAllPlayerItem:(id /* block */)a0 coverBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)requestMVList:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestVideoList:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)canVideoAddToDraft:(BOOL)a0 index:(int)a1;
- (void)videoAddToDraft:(BOOL)a0 index:(int)a1;
- (void)generateAllPlayerItemInternal:(id /* block */)a0 completion:(id /* block */)a1;
- (void)generateCover:(id /* block */)a0;
- (void)generateTemplatePlayerItem:(id /* block */)a0;
- (void)assetCopyToDraftSync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
