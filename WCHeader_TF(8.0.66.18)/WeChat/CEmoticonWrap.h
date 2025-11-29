@class NSString, NSData, EmojiInfoObj;

@interface CEmoticonWrap : NSObject <PBCoding>

@property (nonatomic) unsigned int m_uiType;
@property (nonatomic) BOOL m_bCanDelete;
@property (nonatomic) unsigned int m_uiGameType;
@property (retain, nonatomic) NSString *m_nsAppID;
@property (retain, nonatomic) NSString *m_nsThumbImgPath;
@property (nonatomic) unsigned int m_lastUsedTime;
@property (retain, nonatomic) NSData *m_imageData;
@property (nonatomic) unsigned int m_extFlag;
@property (nonatomic) BOOL m_isAsyncUpload;
@property (retain, nonatomic) EmojiInfoObj *m_emojiInfo;
@property (nonatomic) BOOL m_isRemoteRecommed;
@property (nonatomic) BOOL m_isLastSended;
@property (retain, nonatomic) NSString *m_query;
@property (nonatomic) BOOL isReommandSearchWrap;
@property (nonatomic) unsigned int recommendEmojiFrom;
@property (nonatomic) unsigned long long recommendRequestId;
@property (readonly, nonatomic) BOOL isSelfieEmoticon;
@property (nonatomic) BOOL disableRecordSend;
@property (retain, nonatomic) NSString *fromSearchKey;
@property (retain, nonatomic) NSString *recommmendReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_uiType;
+ (void)PBArrayAdd_m_bCanDelete;
+ (void)PBArrayAdd_m_uiGameType;
+ (void)PBArrayAdd_m_nsAppID;
+ (void)PBArrayAdd_m_nsThumbImgPath;
+ (void)PBArrayAdd_m_lastUsedTime;
+ (void)PBArrayAdd_m_extFlag;
+ (void)PBArrayAdd_m_isAsyncUpload;
+ (void)PBArrayAdd_m_isRemoteRecommed;
+ (void)PBArrayAdd_m_isLastSended;
+ (void)PBArrayAdd_m_query;
+ (void)PBArrayAdd_m_emojiInfo;
+ (void)initialize;

- (struct CGSize { double x0; double x1; })emoticonSize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithEmojiInfoObj:(id)a0;
- (void).cxx_destruct;

@end
