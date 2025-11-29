@class NSString;
@protocol SimpleImgInfoDelegate;

@interface SimpleImgInfo : MMObject

@property (retain, nonatomic) NSString *m_strMsgLocalID;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (nonatomic) BOOL m_bExpired;
@property (weak, nonatomic) id<SimpleImgInfoDelegate> m_delegate;
@property (nonatomic) BOOL forbidDetailPage;
@property (nonatomic) BOOL m_noResponseClick;

- (id)getTitle;
- (id)getSessionName;
- (id)getSquareImgDir;
- (id)getImgPath;
- (id)getImage;
- (id)getImageData;
- (id)getSightPath;
- (unsigned int)getVideoTime;
- (id)getDefaultImg;
- (id)getIconName;
- (BOOL)isAppUrlMsg;
- (BOOL)isAppFileMsg;
- (BOOL)isFileMsg;
- (BOOL)isAppMusicMsg;
- (BOOL)isAppVideoMsg;
- (BOOL)isAppNoteMsg;
- (BOOL)isAppRecordMsg;
- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (BOOL)isVideoMsg;
- (BOOL)isFromC2C;
- (BOOL)isLivePhotoMsg;
- (BOOL)isLivePhotoVideoExist;
- (long long)compare:(id)a0;
- (BOOL)isBrandMpVideoMsg;
- (BOOL)isUseWebImg;
- (id)getThumbUrl;
- (BOOL)isGroupNoticeMsg;
- (BOOL)hasRawFile;
- (id)getRawFilePath;
- (long long)getRawFileSize;
- (id)getThumbPath;
- (id)getLivePhotoVideoPath;
- (id)getImgUUID;
- (BOOL)isFinderMsg;
- (void)startVideoPreload:(unsigned int)a0;
- (unsigned long long)getMsgRelatedResourceSize;
- (void).cxx_destruct;

@end
