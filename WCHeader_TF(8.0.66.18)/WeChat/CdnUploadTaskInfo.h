@class NSString, CDNUploadMsgImgPrepareResponse, NSArray, NSData;

@interface CdnUploadTaskInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFileId;
@property (retain, nonatomic) NSString *m_nsAesKey;
@property (retain, nonatomic) NSString *m_nsThumbAesKey;
@property (nonatomic) unsigned long long m_nFileLength;
@property (retain, nonatomic) NSString *m_nsFileMD5;
@property (nonatomic) int m_nMidimgLength;
@property (retain, nonatomic) NSString *m_nsTransInfo;
@property (nonatomic) int m_nRetCode;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (nonatomic) int m_nThumbImgLength;
@property (retain, nonatomic) NSString *m_nsThumbMd5;
@property (retain, nonatomic) NSString *m_nsMidImageMd5;
@property (retain, nonatomic) NSString *m_nsStreamId;
@property (retain, nonatomic) NSString *m_nsFileUrl;
@property (retain, nonatomic) NSString *m_nsThumbUrl;
@property (nonatomic) unsigned int m_uiScene;
@property (nonatomic) unsigned int m_nHitCacheType;
@property (nonatomic) BOOL m_bNeedSendMsg;
@property (nonatomic) unsigned long long m_nSvrMsgId;
@property (nonatomic) BOOL m_bFileExist;
@property (retain, nonatomic) NSString *m_videoNewMd5;
@property (nonatomic) unsigned int m_uiCrc32;
@property (nonatomic) BOOL m_useSafeCdn;
@property (retain, nonatomic) CDNUploadMsgImgPrepareResponse *m_pbUploadResp;
@property (retain, nonatomic) NSString *m_lastSvrIP;
@property (retain, nonatomic) NSString *m_emojiMd5;
@property (retain, nonatomic) NSArray *m_arrCheckHitFileInfo;
@property (retain, nonatomic) NSArray *arrFileInfo;
@property (retain, nonatomic) NSData *cdnProtoData;

- (id)init;
- (void).cxx_destruct;

@end
