@class NSString, NSMutableDictionary, CMessageWrap, WCMediaItem, MassSendWrap;

@interface CdnTaskInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (retain, nonatomic) MassSendWrap *m_massWrapMsg;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (nonatomic) unsigned int m_uiThumbSize;
@property (retain, nonatomic) NSString *m_uiThumbUrl;
@property (retain, nonatomic) NSString *m_uiThumbAesKey;
@property (retain, nonatomic) NSString *m_uiAuthKey;
@property (nonatomic) BOOL m_bHD;
@property (nonatomic) unsigned long long m_uiFinishedLen;
@property (nonatomic) unsigned long long m_uiTotalLen;
@property (nonatomic) unsigned long long m_ui64StartTime;
@property (nonatomic) unsigned long long m_ui64EndTime;
@property (nonatomic) int m_nRetCode;
@property (nonatomic) BOOL m_bUpload;
@property (nonatomic) BOOL m_bThumb;
@property (retain, nonatomic) NSString *m_nsCdnStatInfo;
@property (nonatomic) unsigned int m_uiOpType;
@property (retain, nonatomic) NSString *m_nsMd5;
@property (retain, nonatomic) NSString *m_nsShareOriginUrl;
@property (retain, nonatomic) NSString *m_nsShareOpenUrl;
@property (retain, nonatomic) NSString *m_nsJsAppId;
@property (retain, nonatomic) NSMutableDictionary *m_dicStatParas;
@property (nonatomic) BOOL m_bAutoDownload;
@property (nonatomic) BOOL m_bDisableHitCheck;
@property (nonatomic) BOOL m_bCheckExistOnly;
@property (nonatomic) double m_tGetMoovTime;
@property (nonatomic) unsigned long long m_emDownloadMode;
@property (retain, nonatomic) WCMediaItem *m_oWCMediaItem;
@property (nonatomic) unsigned long long m_saveAlbumMode;
@property (nonatomic) BOOL m_bSilent;
@property (retain, nonatomic) NSString *m_nsSnsPostUser;
@property (retain, nonatomic) NSMutableDictionary *m_userInfo;
@property (nonatomic) unsigned long long m_ui64TaskCreateTime;
@property (nonatomic) BOOL isSendingMsg;
@property (nonatomic) BOOL isSendImgWithCdn;
@property (copy, nonatomic) NSString *tempPath;
@property (copy, nonatomic) NSString *cachePath;
@property (nonatomic) BOOL customizedVideoFlagsEnabled;
@property (nonatomic) int videoFlagPolicy;
@property (copy, nonatomic) NSString *requestVideoFlag;
@property (copy, nonatomic) NSString *responseVideoFlag;
@property (nonatomic) BOOL m_bPreloadTask;
@property (nonatomic) unsigned int m_uiHasPreloadSize;
@property (nonatomic) unsigned int m_uiConfigPreloadPercent;
@property (nonatomic) BOOL m_bSourceChanged;
@property (nonatomic) unsigned int m_uiMoovPos;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL isSkipTransH264;
@property (nonatomic) BOOL hasTryWxamConvert;
@property (nonatomic) BOOL wxamIllegal;
@property (nonatomic) BOOL wxamDisabled;
@property (nonatomic) BOOL heicIllegal;
@property (nonatomic) BOOL hadTryCaculateOriginSourceMD5;
@property (nonatomic) BOOL hadTryCalcPHash;
@property (nonatomic) long long downloadBehavior;

+ (unsigned int)GetStatNetworkType;
+ (BOOL)isServerBehavior:(long long)a0;

- (id)init;
- (id)GetStatInfo;
- (BOOL)isMsgFromChatroom;
- (unsigned int)getVideoPreloadStatus;
- (id)description;
- (void).cxx_destruct;

@end
