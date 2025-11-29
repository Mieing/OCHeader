@class NSMutableDictionary;

@interface IESLLPOIGoodsDetailPreviewManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *previewDictionary;

+ (id)sharedInstance;

- (BOOL)shouldPreventPauseVideoWhenGoodsDetailPopup;
- (void)startPreviewWithOpenUrl:(id)a0 context:(id)a1;
- (void)endPreviewWithRouterParams:(id)a0 viewController:(id)a1;
- (id)setupWithViewController:(id)a0 routerParams:(id)a1;
- (void)startPreviewWithOpenUrl:(id)a0 feedManager:(id)a1;
- (id)getInstanceManagerWithRouterParams:(id)a0;
- (void).cxx_destruct;

@end
