@class MsgFileTransferTask, ShareDataToOpenSDKController;

@interface MsgFileTransferLogic : FileTransferLogic

@property (retain, nonatomic) MsgFileTransferTask *task;
@property (retain, nonatomic) ShareDataToOpenSDKController *shareOpenSDKController;

- (id)initWithTask:(id)a0;
- (unsigned int)previewType;
- (id)previewLiteappQuery;
- (void)openTaskFile:(id)a0 fromUserClick:(BOOL)a1;
- (BOOL)hasMoreNavigationItem;
- (BOOL)canAddToFavorites;
- (id)generateFavoriteItem;
- (BOOL)canForwardToDevice;
- (void)onForwardToDevice;
- (void)onOpenBy3rdApp;
- (void)onForwardToContact:(id)a0 inViewController:(id)a1;
- (id)commonReportViewParams;
- (void).cxx_destruct;

@end
