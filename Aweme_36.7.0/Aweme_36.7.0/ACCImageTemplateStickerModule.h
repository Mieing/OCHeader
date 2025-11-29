@class ACCImageTemplateDeSelectPlugin, ACCNLELayerService, NSString, NSDictionary, ACCStickerContainerView;

@interface ACCImageTemplateStickerModule : NSObject

@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) ACCNLELayerService *NLEImageService;
@property (retain, nonatomic) ACCImageTemplateDeSelectPlugin *deSelectPlugin;
@property (retain, nonatomic) NSString *templatePath;
@property (retain, nonatomic) NSDictionary *commonTrackParams;
@property (copy, nonatomic) id /* block */ startEditTextLayerCallBack;
@property (copy, nonatomic) id /* block */ endEditTextLayerCallBack;

- (void)updateLayerViewInStickerContainer:(id)a0 withUpdatedModule:(id)a1;
- (void)registerInputModule;
- (void).cxx_destruct;
- (id)init;

@end
