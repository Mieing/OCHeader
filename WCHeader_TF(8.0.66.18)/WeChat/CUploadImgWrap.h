@class NSString, NSData;

@interface CUploadImgWrap : NSObject

@property (retain, nonatomic) NSString *m_nsFromUsr;
@property (retain, nonatomic) NSString *m_nsToUsr;
@property (nonatomic) unsigned int m_uiLocalID;
@property (nonatomic) long long m_n64SvrID;
@property (nonatomic) unsigned int m_uiTotalLen;
@property (nonatomic) unsigned int m_uiStartPos;
@property (nonatomic) unsigned int m_uiDataLen;
@property (retain, nonatomic) NSData *m_dtBuffer;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (nonatomic) unsigned int m_uiMessageType;
@property (nonatomic) unsigned int m_uiSendTime;
@property (nonatomic) BOOL m_bHDImg;
@property (nonatomic) BOOL m_bWifi;
@property (nonatomic) unsigned int m_uiSource;

- (id)init;
- (void).cxx_destruct;

@end
