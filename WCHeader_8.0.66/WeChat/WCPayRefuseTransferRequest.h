@class NSString;

@interface WCPayRefuseTransferRequest : NSObject

@property (retain, nonatomic) NSString *m_nsTransferID;
@property (retain, nonatomic) NSString *m_nsFromUserName;
@property (nonatomic) unsigned long long m_uiInvalidTime;
@property (retain, nonatomic) NSString *group_username;
@property (nonatomic) unsigned int groupType;
@property (retain, nonatomic) NSString *sub_title_clicked;

- (void).cxx_destruct;

@end
