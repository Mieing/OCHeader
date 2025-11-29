@class NSString, NSDictionary, IESECGoodsDetailPageContext, IESECGoodsDetailBottomMetaModel;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECPdpSKUViewController : IESECSKUBaseViewController <IESECSKUServiceProtocol, IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol>

@property (retain, nonatomic) NSDictionary *pdpSchemaParams;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) IESECGoodsDetailPageContext *pageContext;
@property (retain, nonatomic) IESECGoodsDetailBottomMetaModel *bottomMeta;
@property (copy, nonatomic) id /* block */ nextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *closeMethod;
@property (copy, nonatomic) NSString *previousPageName;
@property (copy, nonatomic) NSDictionary *extraLogParams;
@property (copy, nonatomic) NSDictionary *entranceInfoExtraParams;

- (void)embedInContainer:(id)a0;
- (double)popoverContentHeight;
- (void)containerWillDismissContentPopover;
- (void)skudSpecsChangedWithSKUInfo:(id)a0;
- (void)didOpenSKU;
- (void)willCloseWithSKUInfo:(id)a0;
- (void)didCloseWithSKUInfo:(id)a0;
- (void)didAddCartWithSKUInfo:(id)a0;
- (void)skuBuyNowWithResult:(BOOL)a0 extraInfo:(id)a1;
- (void)didOpenSimpleURLWithSKUInfo:(id)a0;
- (void)dismissCurrentVC;
- (void)showGoodsDetailHeaderReportButtonIfNeeded;
- (void)dismissVCFromSuperVC;
- (void)storeUserActionWithSelectedIDs:(id)a0 selectedSKUID:(id)a1 selectedCount:(id)a2;
- (id)initWithPageContext:(id)a0 bottomMeta:(id)a1 schemaParams:(id)a2;
- (void)registerJSBCallBack;
- (id)skuSchemaParams;
- (id)detailSchemaParams;
- (id)getValueFromPath:(id)a0 backupPath:(id)a1;
- (id)passThroughDataWithToKey:(id)a0;
- (void).cxx_destruct;

@end
