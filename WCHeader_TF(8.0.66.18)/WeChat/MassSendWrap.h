@class CaptureVideoInfo, NSArray, NSString, UIImage, NSData, CEmoticonWrap, WCFinderDataItem;

@interface MassSendWrap : NSObject

@property (nonatomic) unsigned int m_uiMessageType;
@property (retain, nonatomic) NSArray *m_arrayToList;
@property (retain, nonatomic) NSString *m_nsText;
@property (retain, nonatomic) UIImage *m_image;
@property (retain, nonatomic) NSData *m_dtImage;
@property (retain, nonatomic) NSData *m_dtVoice;
@property (nonatomic) unsigned int m_uiVoiceTime;
@property (retain, nonatomic) CaptureVideoInfo *m_oVideoInfo;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (nonatomic) unsigned int m_uiVoiceTmpID;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (nonatomic) unsigned int m_uiMesLocalID;
@property (nonatomic) unsigned int m_uiIsSendAgain;
@property (nonatomic) unsigned int m_voiceFormat;
@property (nonatomic) unsigned int m_uiUploadStatus;
@property (retain, nonatomic) NSString *m_nsUsrNameList;
@property (retain, nonatomic) NSString *m_nsFileMD5;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
