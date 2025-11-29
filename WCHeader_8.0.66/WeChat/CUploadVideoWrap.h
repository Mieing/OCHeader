@class NSString, NSData;

@interface CUploadVideoWrap : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFromUsrName;
@property (retain, nonatomic) NSString *m_nsToUsrName;
@property (nonatomic) unsigned int m_uiLocalID;
@property (nonatomic) long long m_n64SvrID;
@property (nonatomic) unsigned int m_uiThumbTotalLen;
@property (nonatomic) unsigned int m_uiThumbStartPos;
@property (retain, nonatomic) NSData *m_dtThumb;
@property (nonatomic) unsigned int m_uiVideoTotalLen;
@property (nonatomic) unsigned int m_uiVideoStartPos;
@property (nonatomic) unsigned int m_uiVideoTime;
@property (retain, nonatomic) NSData *m_dtVideo;
@property (nonatomic) unsigned int m_uiCameraType;
@property (nonatomic) unsigned int m_uiNetwork;
@property (nonatomic) unsigned int m_uiVideoSource;
@property (nonatomic) unsigned int m_uiEncrypVer;
@property (retain, nonatomic) NSString *m_nsAesKey;
@property (retain, nonatomic) NSString *m_nsVideoUrl;
@property (retain, nonatomic) NSString *m_nsVideoThumbUrl;
@property (retain, nonatomic) NSString *m_nsThumbAesKey;
@property (nonatomic) unsigned int m_uiVideoThumbSize;
@property (nonatomic) unsigned int m_uiVideoThumbWidth;
@property (nonatomic) unsigned int m_uiVideoThumbHeight;
@property (retain, nonatomic) NSString *m_nsMsgSource;
@property (retain, nonatomic) NSString *m_nsMd5;
@property (retain, nonatomic) NSString *m_nsNewMd5;
@property (nonatomic) unsigned int m_uiCrc32;
@property (retain, nonatomic) NSString *m_nsStreamVideoUrl;
@property (retain, nonatomic) NSString *m_nsStreamVideoTitle;
@property (retain, nonatomic) NSString *m_nsStreamVideoWording;
@property (retain, nonatomic) NSString *m_nsStreamVideoWebUrl;
@property (nonatomic) unsigned int m_uiStreamVideoTime;
@property (retain, nonatomic) NSString *m_nsStreamVideoThumbUrl;
@property (retain, nonatomic) NSString *m_nsStreamVideoPublishId;
@property (retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo;
@property (retain, nonatomic) NSString *m_nsStatExtStr;
@property (nonatomic) BOOL m_bHitMd5;
@property (nonatomic) BOOL m_bUseSafeCdn;
@property (nonatomic) unsigned int m_forwardType;
@property (nonatomic) unsigned int m_videoSource;
@property (retain, nonatomic) NSString *m_nsAppId;
@property (retain, nonatomic) NSString *m_nsMessageAction;
@property (retain, nonatomic) NSString *m_nsMessageExt;
@property (retain, nonatomic) NSString *m_nsMediaTagName;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
