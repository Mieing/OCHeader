@class NSString, DitoGeneralContainerPageContext, DitoPageModel, AWEPOIDetailListCommonUtil, UIViewController;
@protocol AWEPOIUGCRateContextProtocol;

@interface AWEPOIDetailListCoiUtil : NSObject <AWEPOIDetailListCoiUtilProtocol>

@property (weak, nonatomic) DitoPageModel *pageModel;
@property (retain, nonatomic) AWEPOIDetailListCommonUtil *commonHelper;
@property (copy, nonatomic) NSString *coiTagName;
@property (weak, nonatomic) UIViewController *detailViewController;
@property (weak, nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> *context;
@property (nonatomic) BOOL isFromIsolated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (void)recordCellTagWithVM:(id)a0;
- (BOOL)isHitCOITestAndShowInPoiPage;
- (void)updateCOICardDisplayStyle;
- (void).cxx_destruct;

@end
