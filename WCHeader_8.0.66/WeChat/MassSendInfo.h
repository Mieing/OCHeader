@class CaptureVideoInfo, NSString, NSData, UIImage, CMessageWrap, CEmoticonWrap;

@interface MassSendInfo : NSObject {
    CEmoticonWrap *m_emoticonWrap;
}

@property (retain, nonatomic) NSString *m_nsToList;
@property (retain, nonatomic) NSString *m_nsToListMD5;
@property (nonatomic) unsigned int m_uiMessageType;
@property (retain, nonatomic) NSData *m_originDtBuffer;
@property (retain, nonatomic) NSData *m_dtBuffer;
@property (nonatomic) unsigned int m_uiStartPos;
@property (nonatomic) unsigned int m_uiTotalLen;
@property (retain, nonatomic) NSString *m_nsLocalID;
@property (nonatomic) unsigned int m_uiMediaTime;
@property (retain, nonatomic) NSData *m_dtThumb;
@property (nonatomic) unsigned int m_uiThumbStartPos;
@property (nonatomic) unsigned int m_uiThumbTotalLen;
@property (nonatomic) unsigned int m_uiVideoSource;
@property (nonatomic) unsigned int m_uiCameraType;
@property (retain, nonatomic) UIImage *m_image;
@property (retain, nonatomic) NSString *m_nsText;
@property (retain, nonatomic) CaptureVideoInfo *m_videoInfo;
@property (nonatomic) BOOL m_bDataSent;
@property (nonatomic) unsigned int m_uiToListCount;
@property (nonatomic) unsigned int m_uiIsSendAgain;
@property (nonatomic) unsigned int m_uiCompressType;
@property (nonatomic) unsigned int m_uiVoiceFormat;
@property (nonatomic) BOOL hasUploadedToCDN;
@property (retain, nonatomic) NSString *tmpFilePath;
@property (retain, nonatomic) NSString *tmpThumbPath;
@property (retain, nonatomic) NSString *tmpMiddlePath;
@property (retain, nonatomic) CMessageWrap *m_msgWrap;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
