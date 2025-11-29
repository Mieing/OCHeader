@class NSString, AWEEffectEditorManager;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface ACCAIGCCustomServiceImpl : ACCEditViewModel <ACCSequenceEditServicePlayerSubscriber>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) BOOL customPropIdReachMaxLimit;
@property (retain, nonatomic) AWEEffectEditorManager *effectEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_addBorderForCustomPropIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)addCornerRadiusWithImage:(id)a0;
- (void)exportCustomPropWithSelectImage:(id)a0 cellIconPath:(id)a1 appliedEffect:(id)a2 packagePath:(id)a3 iconPath:(id)a4 coverPath:(id)a5 completion:(id /* block */)a6;
- (void)exportCustomPropIfNeedWithSelectImage:(id)a0 cellIconPath:(id)a1 appliedEffect:(id)a2;
- (void)requestCustomizedEffectId;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
