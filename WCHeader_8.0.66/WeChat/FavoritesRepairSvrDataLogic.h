@class FavoritesItemDB, NSMutableArray;

@interface FavoritesRepairSvrDataLogic : MMObject <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate> {
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_resendFavItems;
    BOOL _isCurrentUploading;
    NSMutableArray *_resendingFavItems;
}

- (id)init;
- (void)dealloc;
- (void)initDB:(id)a0;
- (id)resendFavItemSaveFilePath;
- (void)loadResendFavItem;
- (void)saveResendFavItem;
- (void)doCheckFavItem:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)processUploadFavItem:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)processResendFavItem:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)checkResendFavItem:(id)a0;
- (void)tryUploadAndSendFavItem;
- (BOOL)checkAllowUpdateItem:(unsigned int)a0;
- (void)startCheckResendFavItem:(unsigned int)a0 resendFavItem:(id)a1;
- (BOOL)updateItemXml:(id)a0 withResendItem:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)HandleCheckFavItemResp:(id)a0 Event:(unsigned int)a1;
- (void)handleModFavItem:(id)a0 Event:(unsigned int)a1;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
