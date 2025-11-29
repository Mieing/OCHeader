@class NSString, CContact;

@interface ChatBotVoIPAIMemberInfo : NSObject <IContactMgrExt>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headImage;
@property (retain, nonatomic) NSString *headImageName;

- (id)initWithUsername:(id)a0;
- (id)initWithContact:(id)a0;
- (id)initWithPB:(id)a0;
- (id)convertToPB;
- (void)updateContact:(id)a0;
- (void)onNewContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end
