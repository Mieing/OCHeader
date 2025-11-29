@class NSMutableArray, CContact;

@interface ContactRemarkLogic : MMObject <IContactMgrExt, PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableArray *uploadedCardItem;
@property (retain, nonatomic) CContact *downloadingContact;

- (id)pathForCardImage:(id)a0 url:(id)a1 isTempPath:(BOOL)a2;
- (void)dealloc;
- (id)init;
- (id)cardImageRootPath;
- (id)strangerCardImageRootPath;
- (id)listCardImgFile;
- (id)listStrangerCardImgFile;
- (id)pathForCardImage:(id)a0 url:(id)a1;
- (id)pathForStrangerCardImageWithFileName:(id)a0;
- (void)tryDeleteInvalidateCardImg:(id)a0;
- (void)tryDeleteInvalidateStrangerCardImg:(id)a0;
- (void)deleteInvalidateCardForUserName:(id)a0 rootPath:(id)a1 fileList:(id)a2 validPath:(id)a3;
- (void)downloadCardImg:(id)a0;
- (id)getCardImgList:(id)a0;
- (id)getFirstCardImg:(id)a0;
- (id)getStrangerCardImgList:(id)a0;
- (void)uploadCardImg:(id)a0 cardImgList:(id)a1;
- (void)uploadCardImg:(id)a0 cardImageList:(id)a1 index:(long long)a2;
- (void)onFinishUploadCDN:(id)a0;
- (void)onUploadCardImg:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)contactNeedDownloadCardImg:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onFailedToGetContactsFromSvr;
- (void).cxx_destruct;

@end
