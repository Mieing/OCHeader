@class MPPageIdentityInfo, NSString, WASourceWeappInfo, VideoUploadStatInfo, EditVideoAttr, MMAsset, MMImageExifLogInfo;

@interface CaptureVideoInfo : NSObject

@property (retain, nonatomic) MMAsset *asset;
@property (nonatomic) BOOL bRawVideo;
@property (retain, nonatomic) NSString *nsRawAesKey;
@property (retain, nonatomic) NSString *nsRawDataUrl;
@property (retain, nonatomic) NSString *nsRawFileMd5;
@property (retain, nonatomic) NSString *nsUploadToken;
@property (retain, nonatomic) NSString *nsRawVidePath;
@property (retain, nonatomic) NSString *nsOriginSourceDataMd5;
@property (nonatomic) unsigned long long rawFileLength;
@property (nonatomic) unsigned long long overWriteMsgSvrID;
@property (nonatomic) unsigned int overWriteMsgSendTime;
@property (nonatomic) BOOL isSpatial;
@property (retain, nonatomic) NSString *thumb_path;
@property (retain, nonatomic) NSString *video_path;
@property (retain, nonatomic) NSString *video_assetId;
@property (retain, nonatomic) NSString *m_assetIdForForward;
@property (nonatomic) unsigned int video_time;
@property (nonatomic) unsigned int video_size;
@property (nonatomic) unsigned int thumb_size;
@property (nonatomic) unsigned int m_uiVideoOffset;
@property (nonatomic) BOOL front_camera;
@property (nonatomic) unsigned int m_uiVideoSource;
@property (nonatomic) BOOL m_bForward;
@property (nonatomic) unsigned int m_forwardType;
@property (retain, nonatomic) NSString *m_nsMsgDataUrl;
@property (retain, nonatomic) NSString *m_nsMsgThumbUrl;
@property (retain, nonatomic) NSString *m_nsAesKey;
@property (retain, nonatomic) NSString *m_msgSource;
@property (nonatomic) unsigned int thumb_width;
@property (nonatomic) unsigned int thumb_height;
@property (nonatomic) unsigned int video_width;
@property (nonatomic) unsigned int video_height;
@property (retain, nonatomic) NSString *m_md5;
@property (retain, nonatomic) NSString *m_newMd5;
@property (nonatomic) unsigned int m_videoCreateTime;
@property (retain, nonatomic) NSString *m_nsStreamVideoUrl;
@property (nonatomic) unsigned int m_uiStreamVideoTime;
@property (retain, nonatomic) NSString *m_nsStreamVideoTitle;
@property (retain, nonatomic) NSString *m_nsStreamVideoWording;
@property (retain, nonatomic) NSString *m_nsStreamVideoWebUrl;
@property (retain, nonatomic) NSString *m_nsStreamVideoThumbUrl;
@property (retain, nonatomic) NSString *m_nsStreamVideoPublishId;
@property (retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo;
@property (retain, nonatomic) NSString *m_nsStatExtStr;
@property (retain, nonatomic) NSString *m_authkey;
@property (retain, nonatomic) VideoUploadStatInfo *m_statInfo;
@property (nonatomic) BOOL isEdited;
@property (retain, nonatomic) EditVideoAttr *editVideoAttr;
@property (retain, nonatomic) MMImageExifLogInfo *exifLogInfo;
@property (retain, nonatomic) NSString *m_nsAttachFileKey;
@property (nonatomic) unsigned int m_uiContinueUploadCount;
@property (nonatomic) unsigned int m_uiPercent;
@property (retain, nonatomic) NSString *m_nsSpecifiedChatName;
@property (nonatomic) unsigned int m_uiIsSenderStatus;
@property (retain, nonatomic) NSString *m_nsAppId;
@property (retain, nonatomic) NSString *m_nsMessageAction;
@property (retain, nonatomic) NSString *m_nsMessageExt;
@property (retain, nonatomic) NSString *m_nsMediaTagName;
@property (retain, nonatomic) WASourceWeappInfo *m_sourceWeappInfo;
@property (retain, nonatomic) NSString *m_weappSourceUsername;
@property (retain, nonatomic) NSString *m_nsEncodeJson;
@property (retain, nonatomic) MPPageIdentityInfo *m_mpPageIdentityInfo;
@property (nonatomic) unsigned int m_referFromScene;
@property (retain, nonatomic) NSString *revokeBatchId;

+ (id)genVideoInfoWithVideoUrl:(id)a0 thumb:(id)a1;
+ (int)getVideoDurationForAsset:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
