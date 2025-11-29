@class RecordFileTransferTask, ShareDataToOpenSDKController;

@interface RecordFileTransferLogic : FileTransferLogic

@property (retain, nonatomic) RecordFileTransferTask *task;
@property (retain, nonatomic) ShareDataToOpenSDKController *shareOpenSDKController;

- (id)initWithTask:(id)a0;
- (unsigned int)previewType;
- (id)previewLiteappQuery;
- (void)openTaskFile:(id)a0 fromUserClick:(BOOL)a1;
- (BOOL)hasMoreNavigationItem;
- (void)onForwardToContact:(id)a0 inViewController:(id)a1;
- (BOOL)canAddToFavorites;
- (id)generateFavoriteItem;
- (id)commonReportViewParams;
- (void).cxx_destruct;

@end
