@class NSString;

@interface WCRedEnvelopesOperationInfo : NSObject

@property (nonatomic) BOOL m_bOpEnable;
@property (retain, nonatomic) NSString *m_nsOpName;
@property (retain, nonatomic) NSString *m_nsOpType;
@property (retain, nonatomic) NSString *m_nsOpContent;
@property (retain, nonatomic) NSString *m_nsOpShowType;
@property (nonatomic) unsigned int m_uiOsskey;
@property (weak, nonatomic) id m_inSender;

- (void).cxx_destruct;

@end
