@class NSString;

@interface CCardContact : CContact

@property (retain, nonatomic) NSString *m_nsCardDesc;
@property (retain, nonatomic) NSString *m_nsCardDescIcon;

+ (id)contactFromShareCardMsgContent:(id)a0;
+ (id)contactFromShareCardMsgContentForFTS:(id)a0;

- (void)genContactFromShareCardMsgWrapContent:(id)a0;
- (void).cxx_destruct;

@end
