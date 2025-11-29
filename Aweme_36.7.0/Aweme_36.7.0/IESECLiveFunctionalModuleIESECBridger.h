@class NSString;
@protocol IESLivePopupService;

@interface IESECLiveFunctionalModuleIESECBridger : NSObject <IESECLiveFunctionalModule>

@property (retain, nonatomic) id<IESLivePopupService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)showAudienceGoodsListPopupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (void)showAudienceGoodsListPopupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1 iPadClickCompletion:(id /* block */)a2;
- (void)showAnchorGoodsListPopupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1 onShowCompletion:(id /* block */)a2 onHideCompletion:(id /* block */)a3;
- (void)didClosePickedCommodityPopupView;
- (void).cxx_destruct;

@end
