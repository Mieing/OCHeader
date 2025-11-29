@class NSString;

@interface WCPayConfirmTransferRequest : NSObject

@property (retain, nonatomic) NSString *m_nsTransferID;
@property (retain, nonatomic) NSString *m_nsFromUserName;
@property (nonatomic) unsigned long long m_uiInvalidTime;
@property (retain, nonatomic) NSString *left_button_continue;
@property (retain, nonatomic) NSString *group_username;
@property (nonatomic) unsigned int recv_channel_type;
@property (nonatomic) unsigned int groupType;
@property (retain, nonatomic) NSString *sub_title_clicked;
@property (nonatomic) unsigned long long sub_recv_channel_id;
@property (retain, nonatomic) NSString *m_nsTransferAttach;

- (void).cxx_destruct;

@end
