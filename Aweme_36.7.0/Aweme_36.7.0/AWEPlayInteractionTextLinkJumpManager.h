@class NSString, AWEPageContext, AWEAwemeModel;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionTextLinkJumpManager : NSObject <AWEPlayInteractionTextLinkJumpManagerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openMpUrl:(id)a0 referString:(id)a1;

- (void)jumpAction;
- (void)configureWithModel:(id)a0 context:(id)a1;
- (void)openMpUrl;
- (void)openXiguaAppIsDialogConfirm:(BOOL)a0;
- (void)noticeTappedDirectOpenAppWithDialogDefaultChecked:(BOOL)a0;
- (id)durationAndPercentParams;
- (void)oldJumpAction;
- (id)copyCommonReportParams;
- (id)directBarType;
- (void)showSheetWithViewController:(id)a0 sheetHeight:(double)a1 commonReportParams:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
