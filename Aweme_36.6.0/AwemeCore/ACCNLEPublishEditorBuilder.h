@class NLEInterface_OC, NSMutableDictionary, NSHashTable, AWEVideoPublishViewModel, NLEEditor_OC, NSString;

@interface ACCNLEPublishEditorBuilder : NSObject <ACCEditSessionBuilderProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NLEInterface_OC *nle;
@property (readonly, nonatomic) NLEEditor_OC *editor;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) NSMutableDictionary *slotNameUserInfoMap;
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
- (id)buildEditSessionWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)restoreStickerUserInfoToNLE;
- (void).cxx_destruct;

@end
