@class NSString, AWEVideoPublishViewModel;
@protocol AWEStickerPickerControllerProtocol, ACCMVSelectService, ACCStickerPickerService;

@interface AWEStickerPickerControllerMVTemplatePlugin : NSObject <ACCStickerPickerServiceSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<AWEStickerPickerControllerProtocol> controller;
@property (weak, nonatomic) id<ACCMVSelectService> mvSelectService;
@property (weak, nonatomic) id<ACCStickerPickerService> stickerPickerService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerViewDidLoad:(id)a0;
- (void)stickerPickerService:(id)a0 didSelectMVTemplateSticker:(id)a1;
- (id)initWithServiceProvider:(id)a0 publishModel:(id)a1;
- (void)p_trackMVTemplatePropClicked:(id)a0;
- (void).cxx_destruct;

@end
