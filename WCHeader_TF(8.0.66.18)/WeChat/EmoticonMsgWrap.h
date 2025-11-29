@class NSString, EmoticonMsgAdditionalInfo;

@interface EmoticonMsgWrap : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int uiEmoticonType;
@property (nonatomic) unsigned int uiGameType;
@property (nonatomic) unsigned int uiGameContent;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *encryptUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *externUrl;
@property (retain, nonatomic) NSString *externMd5;
@property (retain, nonatomic) NSString *tpUrl;
@property (retain, nonatomic) NSString *authKey;
@property (retain, nonatomic) NSString *designerId;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *linkId;
@property (retain, nonatomic) NSString *thumbImgUrl;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *attachedText;
@property (retain, nonatomic) NSString *attachedTextColor;
@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) NSString *serverDesc;
@property (nonatomic) BOOL showRewardTips;
@property (nonatomic) BOOL disableRecordSend;
@property (retain, nonatomic) EmoticonMsgAdditionalInfo *additionalInfo;

+ (void)initialize;

@end
