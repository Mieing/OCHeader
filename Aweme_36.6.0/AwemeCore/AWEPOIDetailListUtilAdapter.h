@class DitoGeneralContainerPageContext, UIViewController, NSString;
@protocol AWEPOIDetailListUtilProtocol, AWEPOIUGCRateContextProtocol;

@interface AWEPOIDetailListUtilAdapter : NSObject <AWEPOIDetailListUtilBaseProtocol>

@property (retain, nonatomic) id<AWEPOIDetailListUtilProtocol> listUtil;
@property (weak, nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> *context;
@property (weak, nonatomic) UIViewController *detailNGViewController;
@property (nonatomic) BOOL isFromIsolated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createListUtil;
+ (id)listUtilWithContext:(id)a0;

- (void)bindStateAndAction;
- (void)recordCellTagWithVM:(id)a0;
- (BOOL)hasDoRateDiggAction;
- (void)firstFeedDidFinishWithPOILogParams:(id)a0;
- (id)paramsForUgcRateUserPageEntrance;
- (BOOL)canShowRateDiggHint;
- (id)rateDiggHintText;
- (BOOL)canShowRateDiggHintInLocalAndUpdate;
- (BOOL)isHitCOITestAndShowInPoiPage;
- (struct CGSize { double x0; double x1; })biserialContainerSize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })biserialCellFrameWithVM:(id)a0;
- (id)extraParamsForLynx:(id)a0;
- (void)recordCountWithUGCItem:(id)a0;
- (void)trackShowUgcRateListPageEvent;
- (void)trackSlideOnPoiUgcAreaEvent;
- (id)currentUgcTag;
- (void)enterUGCIsolatedControllerWithTag:(id)a0 ugcItemModel:(id)a1 viewModel:(id)a2;
- (BOOL)canShowRateDiggHintInLocal;
- (id)ugcFeedsGroupNodeTagList;
- (void)configUGCABParamsWithViewModel:(id)a0;
- (id)ugcRateNodeTagList;
- (BOOL)hasUGCList;
- (BOOL)didSelectUgcTagWithModel:(id)a0 viewModel:(id)a1;
- (void)clickUgcListModuleEntranceWithMethod:(id)a0 viewModel:(id)a1;
- (void)didClickTagExpandButton;
- (void)showRateDiggHintIfNeeded;
- (void)interruptRateDiggHintTiming;
- (void).cxx_destruct;
- (id)init;
- (void)setHeaderModel:(id)a0;
- (id)headerModel;

@end
