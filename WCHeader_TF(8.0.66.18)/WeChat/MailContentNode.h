@class NSString;

@interface MailContentNode : MMObject

@property (nonatomic) long long m_n64MsgId;
@property (nonatomic) int m_uiType;
@property (retain, nonatomic) NSString *m_nsNickName;
@property (retain, nonatomic) NSString *m_nsSrcTime;
@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsDescription;
@property (retain, nonatomic) NSString *m_nsThumbPath;
@property (nonatomic) unsigned int m_dataSize;

- (void).cxx_destruct;

@end
