@class NSString, EmojiInfoObjAff;

@interface EmoticonWrap : WXPBGeneratedMessage

@property (nonatomic) unsigned int uiType;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *thumbImgPath;
@property (nonatomic) unsigned int lastUsedTime;
@property (nonatomic) unsigned int extFlag;
@property (retain, nonatomic) EmojiInfoObjAff *emojiInfo;
@property (retain, nonatomic) NSString *imageDataPath;
@property (nonatomic) unsigned int uiGameType;
@property (nonatomic) BOOL isAsyncUpload;
@property (nonatomic) BOOL isRemoteRecommend;
@property (nonatomic) BOOL isLastSent;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) BOOL isRecommendSearchWrap;
@property (nonatomic) BOOL isSelfieEmoticon;
@property (nonatomic) BOOL disableRecordSend;
@property (retain, nonatomic) NSString *fromSearchKey;

+ (void)initialize;

@end
