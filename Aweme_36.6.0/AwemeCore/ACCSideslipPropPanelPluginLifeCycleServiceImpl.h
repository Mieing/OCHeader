@class NSArray, UIViewController, NSString;
@protocol AWEStickerPickerControllerProtocol;

@interface ACCSideslipPropPanelPluginLifeCycleServiceImpl : NSObject <ACCSideslipPropPanelPluginLifeCycleService>

@property (weak, nonatomic) UIViewController<AWEStickerPickerControllerProtocol> *hostVC;
@property (retain, nonatomic) NSArray *plugins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configHostViewController:(id)a0 plugins:(id)a1;
- (void)postViewDidLoad;
- (void)postViewLayout;
- (void)postWillShowOnView:(id)a0;
- (void)postDidShowOnView:(id)a0;
- (void)postWillDismissFromView:(id)a0;
- (void)postDidDismissFromView:(id)a0;
- (void)postDidSelectNewSticker:(id)a0 oldSticker:(id)a1;
- (void)postDidChangeSticker;
- (void).cxx_destruct;

@end
