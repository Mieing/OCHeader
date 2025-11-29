@class WCNewCardDetailViewController, NSString, WCCardBatchImportViewController;
@protocol WCCardAddHelperDelegate;

@interface WCCardAddHelper : MMObject <WCNewCardDetailViewControllerDelegate, WCCardBatchImportViewControllerDelegate> {
    id<WCCardAddHelperDelegate> _delegate;
}

@property (weak, nonatomic) WCCardBatchImportViewController *batchImportVC;
@property (weak, nonatomic) WCNewCardDetailViewController *cardDetailVC;
@property (nonatomic) BOOL isBatchReturn;
@property (nonatomic) BOOL isDetailReturn;
@property (nonatomic) BOOL isFromAppBrand;
@property (nonatomic) unsigned long long appBrandModeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)handleCardListInfo:(id)a0;
- (void)handleCardListInfo:(id)a0 isPush:(BOOL)a1;
- (void)handleCardListInfo:(id)a0 isPush:(BOOL)a1 isFromAppBrand:(BOOL)a2;
- (void)cancelHandle;
- (void)dismissViewController;
- (void)dismissImportVC;
- (void)onAcceptCardSuccess:(id)a0;
- (void)onAcceptCardFail:(id)a0;
- (void)onDetailDidBeCleared;
- (void)onImportSuccess:(id)a0;
- (void)onImportFail:(id)a0;
- (void)onShareSuccess:(id)a0;
- (void)onShareFail:(id)a0;
- (void)onCancel;
- (void)onBatchDidBeCleared;
- (void).cxx_destruct;

@end
