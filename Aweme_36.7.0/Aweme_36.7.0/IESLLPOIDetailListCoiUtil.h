@class LLDitoGeneralContainerPageContext, LLDitoPageModel, IESLLPOIDetailListCommonUtil, NSString, UIViewController;

@interface IESLLPOIDetailListCoiUtil : NSObject <IESLLPOIDetailListCoiUtilProtocol>

@property (weak, nonatomic) LLDitoPageModel *pageModel;
@property (retain, nonatomic) IESLLPOIDetailListCommonUtil *commonHelper;
@property (copy, nonatomic) NSString *coiTagName;
@property (weak, nonatomic) UIViewController *detailViewController;
@property (weak, nonatomic) LLDitoGeneralContainerPageContext *context;
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
