@class NSString, NSMutableArray;

@interface SubscribeMsgItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *templateId;
@property (nonatomic) unsigned int templateType;
@property (nonatomic) unsigned int chooseStatus;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *keyWordList;
@property (nonatomic) unsigned int settingStatus;
@property (retain, nonatomic) NSString *bizUserName;
@property (nonatomic) unsigned int isOpen;
@property (nonatomic) unsigned int isBan;
@property (retain, nonatomic) NSString *sceneDesc;
@property (retain, nonatomic) NSString *wxaSubscribeStatusString;
@property (nonatomic) unsigned int tid;
@property (nonatomic) unsigned int isAudioTemplate;
@property (nonatomic) unsigned int isAcceptWithAudio;
@property (retain, nonatomic) NSString *audioTemplateUrl;
@property (nonatomic) unsigned int isForceNotifyTemplate;
@property (nonatomic) unsigned int isAcceptWithForceNotify;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int serviceType;

+ (void)initialize;

@end
