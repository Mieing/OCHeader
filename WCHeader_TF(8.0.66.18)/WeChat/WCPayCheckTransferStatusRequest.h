@class NSString;

@interface WCPayCheckTransferStatusRequest : NSObject

@property (retain, nonatomic) NSString *m_nsTransferID;
@property (retain, nonatomic) NSString *m_nsFromUserName;
@property (nonatomic) unsigned long long m_uiInvalidTime;
@property (retain, nonatomic) NSString *m_nsTransactionID;
@property (retain, nonatomic) NSString *group_username;
@property (retain, nonatomic) NSString *m_nsTransferAttach;

- (void).cxx_destruct;

@end
