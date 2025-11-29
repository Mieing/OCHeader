@class NSString, CMessageWrap;

@interface SimpleMsgInfo : SimpleImgInfo

@property (retain, nonatomic) NSString *m_nsChatName;
@property (retain, nonatomic) NSString *m_nsSessionName;
@property (readonly, nonatomic) unsigned int m_uiMsgLocalID;
@property (nonatomic) unsigned int m_uiMsgType;
@property (retain, nonatomic) CMessageWrap *m_msg;
@property (nonatomic) unsigned long long m_msgRelatedSize;

+ (BOOL)isAppPayMsg:(id)a0;
+ (BOOL)isAppMusicMsg:(id)a0;
+ (BOOL)isFinderMsg:(id)a0;
+ (BOOL)isShopOrProductMsg:(id)a0;
+ (BOOL)isGiftMsg:(id)a0;
+ (BOOL)isShareCardMsg:(id)a0;
+ (BOOL)isNoteMsg:(id)a0;
+ (BOOL)isLocationMsg:(id)a0;

- (id)init;
- (void)setM_strMsgLocalID:(id)a0;
- (id)getSquareImgDir;
- (id)getMsg;
- (id)getImage;
- (id)getImageData;
- (id)getImgPath;
- (unsigned int)getVideoTime;
- (id)getTitle;
- (id)getDefaultImg;
- (id)getIconName;
- (id)getThumbOfAppMessage:(id)a0;
- (BOOL)isAppUrlMsg;
- (BOOL)isAppMusicMsg;
- (BOOL)isAppVideoMsg;
- (BOOL)isAppNoteMsg;
- (BOOL)isAppRecordMsg;
- (BOOL)isAppFileMsg;
- (BOOL)isFileMsg;
- (BOOL)isImgMsg;
- (BOOL)isBrandMpVideoMsg;
- (BOOL)isVideoMsg;
- (BOOL)isGroupNoticeMsg;
- (BOOL)isUseWebImg;
- (id)getThumbUrl;
- (BOOL)isWeAppMsg;
- (id)getImgUUID;
- (BOOL)isFinderMsg;
- (BOOL)isShopOrProductMsg;
- (BOOL)isGiftMsg;
- (BOOL)isShareCardMsg;
- (BOOL)isNoteMsg;
- (BOOL)isLocationMsg;
- (unsigned long long)getMsgRelatedResourceSize;
- (id)getSessionName;
- (void).cxx_destruct;

@end
