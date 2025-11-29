@class NSString, NSArray, ACCRepoTextOnImageModel, AWETextOnImageModel, ACCRecordTextTemplateEditor, IESEffectModel, AEKTextStickerResource, _TtC9CameraKit10CameraView;
@protocol ACCRecorderProtocol, ACCTarotFlowProtocol;

@interface AWEStickerApplyTextOnImageEffectHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) id<ACCTarotFlowProtocol> tarotFlow;
@property (retain, nonatomic) id<ACCRecorderProtocol> recorder;
@property (retain, nonatomic) NSArray *fontArray;
@property (retain, nonatomic) AEKTextStickerResource *resource;
@property (retain, nonatomic) ACCRepoTextOnImageModel *repoTextOnImage;
@property (retain, nonatomic) AWETextOnImageModel *textOnImageModel;
@property (copy, nonatomic) NSString *nleJson;
@property (copy, nonatomic) NSString *subEffectId;
@property (nonatomic) BOOL isTextOnImageEffect;
@property (retain, nonatomic) ACCRecordTextTemplateEditor *editor;
@property (retain, nonatomic) IESEffectModel *lastProp;
@property (nonatomic) BOOL hasRequestDowndload;
@property (weak, nonatomic) _TtC9CameraKit10CameraView *cameraView;
@property (nonatomic) BOOL firstBoundingRect;
@property (nonatomic) long long propSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)downloadWithParams:(id)a0 completion:(id /* block */)a1;
- (id)publishModel;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)handlerDidBecomeActive;
- (void)parseEffect:(id)a0;
- (void)moveStickerToSafeArea;
- (id)p_currentProp;
- (void)refreshTextResource;
- (void)cleanTextOnImageModel:(id)a0;
- (id)textOnImageModelwithSticker:(id)a0;
- (id)createEditorWithEffect:(id)a0 textStickerEffect:(id)a1 fontResourceList:(id)a2;
- (void)downloadTextTemplateResourceWithEffect:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
