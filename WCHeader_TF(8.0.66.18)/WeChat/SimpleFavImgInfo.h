@class FavoritesItem, NSString, FavoritesItemDataField;

@interface SimpleFavImgInfo : SimpleMsgInfo <IFavCdnDownloadMgrExt>

@property (retain, nonatomic) FavoritesItemDataField *m_favData;
@property (retain, nonatomic) FavoritesItem *m_favItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)m_strMsgLocalID;
- (id)getSquareImgDir;
- (id)getImgPath;
- (id)getSightPath;
- (unsigned int)getVideoTime;
- (id)getDefaultImg;
- (BOOL)isImgMsg;
- (BOOL)isVideoMsg;
- (BOOL)isBrandMpVideoMsg;
- (BOOL)isUseWebImg;
- (id)getThumbUrl;
- (void)OnFavCdnDownload:(id)a0 RetCode:(int)a1;
- (id)getImgUUID;
- (void).cxx_destruct;

@end
