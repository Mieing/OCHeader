@class NSString, CContact, NSArray, NSMutableDictionary, ChatBotVoIPRoomInfoPB_ExtInfo;

@interface ChatBotVoIPRoomInfo : NSObject <IContactMgrExt>

@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned int openScene;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) CContact *chatBot;
@property (retain, nonatomic) NSArray *chatBotArr;
@property (retain, nonatomic) NSString *roomHeadImage;
@property (retain, nonatomic) NSString *roomNickName;
@property (retain, nonatomic) NSMutableDictionary *transferData;
@property (retain, nonatomic) ChatBotVoIPRoomInfoPB_ExtInfo *extInfo;
@property (nonatomic) int bizType;

- (id)initWithContact:(id)a0;
- (id)initWithPB:(id)a0;
- (id)convertToPB;
- (void)fetchRoomInfo;
- (void)onUpdateContact:(id)a0;
- (void)onNewContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end
