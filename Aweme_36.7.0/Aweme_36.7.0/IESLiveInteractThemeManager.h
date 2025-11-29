@class NSMutableDictionary, NSArray, HTSLiveAudioBGData, NSString, IESLiveAudioThemeUploader, IESLiveGuideModel, IESLiveAudioThemeApi;
@protocol IESLiveRoomService;

@interface IESLiveInteractThemeManager : NSObject <HTSLiveMessageSubscriber, IESLiveInteractGlobalMessageSubscriber>

@property (retain, nonatomic) NSArray *currentThemeList;
@property (retain, nonatomic) NSArray *ktvThemeList;
@property (retain, nonatomic) HTSLiveAudioBGData *currentTheme;
@property (retain, nonatomic) HTSLiveAudioBGData *currentRemoteTheme;
@property (retain, nonatomic) HTSLiveAudioBGData *preRemoteTheme;
@property (nonatomic) BOOL currentThemeIsFromLocal;
@property (copy, nonatomic) NSString *preChoicUri;
@property (nonatomic) BOOL hasReceivedMessage;
@property (retain, nonatomic) IESLiveAudioThemeApi *api;
@property (retain, nonatomic) IESLiveAudioThemeUploader *uploader;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) IESLiveGuideModel *guideModel;
@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) NSMutableDictionary *bgTypeCache;
@property (nonatomic) BOOL isComponentPreLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyForRedDotType:(int)a0 isPre:(BOOL)a1 uri:(id)a2;

- (id)initWithDIContext:(id)a0 room:(id)a1;
- (void)setTheme:(id)a0 roomID:(id)a1 anchorID:(id)a2 imageType:(id)a3 bgType:(int)a4 completion:(id /* block */)a5;
- (void)addUGCBackground:(id)a0 bgType:(int)a1 fileFormat:(id)a2 showArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 roomID:(id)a4 anchorID:(id)a5 completion:(id /* block */)a6;
- (void)fetchLatestThemeWithBGType:(int)a0 roomID:(id)a1 anchorID:(id)a2 completion:(id /* block */)a3;
- (id)imageTypeForSource:(id)a0;
- (void)fetchThemeListWithAnchorId:(id)a0 roomId:(id)a1 scene:(unsigned long long)a2 imageType:(id)a3 completion:(id /* block */)a4;
- (void)deleteUGCImage:(id)a0 roomId:(id)a1 anchorId:(id)a2 scene:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)uploadThemeWithAsset:(id)a0 roomID:(id)a1 anchorID:(id)a2 compressionQuality:(double)a3 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 progress:(id /* block */)a5 completion:(id /* block */)a6;
- (int)audioBgTypeWithScene:(unsigned long long)a0;
- (void)fetchKTVThemeListWithAnchorId:(id)a0 roomId:(id)a1 imageType:(id)a2 scene:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)p_setTheme:(id)a0 isRemoteOrLocal:(BOOL)a1 isStageChange:(BOOL)a2;
- (void)setThemeForLocal:(id)a0;
- (unsigned long long)selectFallbackThemeIndexWithPreChoiceIdx:(unsigned long long)a0 ugcIdx:(unsigned long long)a1 audioThemeList:(id)a2;
- (void)subscribeGlobalMessage;
- (void)unSubscribeGlobalMessage;
- (void)setThemeFromRemote:(id)a0;
- (void)interactGlobalMessageReceived:(id)a0 roomID:(id)a1;
- (id)initWithDIContext:(id)a0 guideModel:(id)a1;
- (void)setThemeFromStageChange:(id)a0;
- (void)fetchCurThemeDataThoughListWithAnchorId:(id)a0 roomId:(id)a1 scene:(unsigned long long)a2 imageType:(id)a3 completion:(id /* block */)a4;
- (void)setUp;
- (void).cxx_destruct;
- (void)clearCache;
- (BOOL)isAnchor;
- (void)messageReceived:(id)a0;
- (void)cancelUpload;

@end
