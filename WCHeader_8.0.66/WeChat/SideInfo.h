@class VADMsg, SideInfo_Playground, SideInfo_VoiceButton, NSString, AiBypassInfo, SideInfo_Poi, SideInfo_TTSTask, SideInfo_News, NSMutableArray, SideInfo_Terminal, SideInfo_SceneState;

@interface SideInfo : WXPBGeneratedMessage

@property (nonatomic) int msgType;
@property (retain, nonatomic) SideInfo_Poi *poi;
@property (retain, nonatomic) NSMutableArray *recentApps;
@property (retain, nonatomic) NSMutableArray *myApps;
@property (retain, nonatomic) NSMutableArray *freqApps;
@property (retain, nonatomic) SideInfo_VoiceButton *voiceButton;
@property (retain, nonatomic) SideInfo_Playground *playground;
@property (retain, nonatomic) SideInfo_News *newsContext;
@property (retain, nonatomic) NSString *textInput;
@property (retain, nonatomic) SideInfo_TTSTask *ttsTask;
@property (retain, nonatomic) AiBypassInfo *aiBypassInfo;
@property (retain, nonatomic) SideInfo_Terminal *terminal;
@property (retain, nonatomic) SideInfo_SceneState *sceneState;
@property (nonatomic) unsigned int uiState;
@property (retain, nonatomic) VADMsg *vadMsg;

+ (void)initialize;

@end
