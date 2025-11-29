@class NSString, NSData;

@interface CDownloadVideoWrap : NSObject

@property (retain, nonatomic) NSString *m_nsFromUsrName;
@property (retain, nonatomic) NSString *m_nsToUsrName;
@property (nonatomic) unsigned int m_uiLocalID;
@property (nonatomic) long long m_n64SvrID;
@property (nonatomic) unsigned int m_uiVideoTotalLen;
@property (nonatomic) unsigned int m_uiVideoStartPos;
@property (retain, nonatomic) NSData *m_dtVideo;
@property (nonatomic) unsigned int m_uiNetwork;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
