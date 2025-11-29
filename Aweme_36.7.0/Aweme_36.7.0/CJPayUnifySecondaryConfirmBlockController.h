@class CJPayDoubleConfirmPageInfo;

@interface CJPayUnifySecondaryConfirmBlockController : NSObject

@property (retain, nonatomic) CJPayDoubleConfirmPageInfo *doubleConfirmPageInfo;
@property (nonatomic) BOOL isShownDoubleConfirmPage;
@property (copy, nonatomic) id /* block */ pointTrackerBlock;

- (void)tryShowSecondaryConfirmAlert:(BOOL)a0 continueBlock:(id /* block */)a1;
- (id)initWithDoubleConfirmInfo:(id)a0;
- (BOOL)p_shouldShowSecondaryConfirmAlert;
- (void)p_showSecondaryConfirmPageWithCancelBlock:(id /* block */)a0 continueBlock:(id /* block */)a1;
- (void)p_showHalfPageSecondaryConfirmWithCancelBlock:(id /* block */)a0 continueBlock:(id /* block */)a1;
- (void)p_showPopupSecondaryConfirmWithCancelBlock:(id /* block */)a0 continueBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
