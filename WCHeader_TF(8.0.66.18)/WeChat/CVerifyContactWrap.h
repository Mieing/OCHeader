@class NSString, CContact, NSArray;

@interface CVerifyContactWrap : NSObject

@property (retain, nonatomic) NSString *m_nsUsrName;
@property (retain, nonatomic) NSString *m_nsOriginalUsrName;
@property (nonatomic) unsigned int m_uiScene;
@property (retain, nonatomic) NSString *m_nsTicket;
@property (nonatomic) unsigned int m_uiWCFlag;
@property (retain, nonatomic) CContact *m_oVerifyContact;
@property (retain, nonatomic) CContact *m_oVerifyChatContact;
@property (retain, nonatomic) NSString *m_nsChatRoomUserName;
@property (retain, nonatomic) NSString *m_nsSourceUserName;
@property (retain, nonatomic) NSString *m_nsSourceNickName;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSString *outerUrl;
@property (copy, nonatomic) NSString *m_reportInfo;
@property (nonatomic) unsigned int mpScene;
@property (nonatomic) BOOL hasReportData;
@property (nonatomic) unsigned int addContactSubScene;
@property (retain, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned int productId;
@property (copy, nonatomic) NSString *finderBuffer;
@property (retain, nonatomic) NSString *verifyContent;
@property (retain, nonatomic) NSString *ctx;
@property (retain, nonatomic) NSString *searchClickId;
@property (retain, nonatomic) NSArray *labelIdList;
@property (retain, nonatomic) NSArray *m_arrPhoneItem;

- (id)init;
- (id)getRealUserName;
- (void).cxx_destruct;

@end
