@class NSString, NLEInterface_OC, NSMutableDictionary, NSHashTable, AWEVideoPublishViewModel, NLEEditor_OC, ACCNLELogger;
@protocol ACCEditCanvasProtocol, IESServiceProvider;

@interface ACCNLEEditorBuilder : NSObject <ACCEditSessionBuilderProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NLEInterface_OC *nle;
@property (readonly, nonatomic) NLEEditor_OC *editor;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (weak, nonatomic) id<IESServiceProvider> serviceResolver;
@property (retain, nonatomic) NSMutableDictionary *slotNameUserInfoMap;
@property (weak, nonatomic) id<ACCEditCanvasProtocol> canvas;
@property (nonatomic) BOOL doNotRenderWhenNotActive;
@property (retain, nonatomic) ACCNLELogger *logger;
@property (nonatomic) BOOL isInfini;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)resetEditSessionWithPublishModel:(id)a0;
- (void)addEditSessionListener:(id)a0;
- (void)setFirstRenderBlk:(id /* block */)a0;
- (void)setFailedToPlayBlk:(id /* block */)a0;
- (void)setNthRenderBlk:(id /* block */)a0;
- (void)setPrepareDoneBlk:(id /* block */)a0;
- (void)configResolver:(id)a0;
- (id)buildEditSessionWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateCanvasContent;
- (void)_createNLEWithPublishModel:(id)a0;
- (void)_createNLEWithPublishModel:(id)a0 doNotRender:(BOOL)a1;
- (void)regenerateReverseAssetIfNeededAndCommitRender;
- (void)restoreStickerUserInfoToNLE;
- (id)initWithPublishModel:(id)a0 doNotRender:(BOOL)a1;
- (void).cxx_destruct;

@end
