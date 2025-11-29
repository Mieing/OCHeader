@class CMessageWrap, NSString, FavoritesItemDataField;

@interface SimpleRecordImgInfo : SimpleImgInfo <IRecordDownloadExt>

@property (retain, nonatomic) FavoritesItemDataField *m_recordData;
@property (retain, nonatomic) CMessageWrap *m_msgWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSquareImgDir;
- (id)getImgPath;
- (id)getThumbPath;
- (id)getLivePhotoVideoPath;
- (id)getSightPath;
- (unsigned int)getVideoTime;
- (id)getDefaultImg;
- (BOOL)isImgMsg;
- (BOOL)isVideoMsg;
- (BOOL)isFromC2C;
- (BOOL)isLivePhotoMsg;
- (BOOL)isLivePhotoVideoExist;
- (id)getImgUUID;
- (void)OnDownloadRecordMessageOK:(id)a0 DataId:(id)a1 bThumb:(BOOL)a2;
- (void).cxx_destruct;

@end
