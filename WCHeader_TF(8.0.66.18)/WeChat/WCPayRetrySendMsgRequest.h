@class NSString;

@interface WCPayRetrySendMsgRequest : NSObject

@property (retain, nonatomic) NSString *m_nsTranscationID;
@property (retain, nonatomic) NSString *m_nsReceiverUserName;
@property (nonatomic) unsigned long long m_uiInvalidTime;
@property (retain, nonatomic) NSString *m_nsTransferID;
@property (nonatomic) unsigned int fromScene;

- (void).cxx_destruct;

@end
