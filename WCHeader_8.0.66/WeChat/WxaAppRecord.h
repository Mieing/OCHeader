@class NSString;

@interface WxaAppRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *nsId;
@property (nonatomic) unsigned int key;
@property (nonatomic) unsigned int time;
@property (nonatomic) unsigned int value;
@property (retain, nonatomic) NSString *ext;
@property (nonatomic) int appstate;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *networkType;
@property (nonatomic) int enterScene;
@property (nonatomic) int usedState;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSString *referPagePath;
@property (nonatomic) unsigned int preScene;
@property (retain, nonatomic) NSString *preSceneNote;
@property (nonatomic) unsigned int isEntrance;

+ (void)initialize;

@end
