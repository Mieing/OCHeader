@class GameLifeSettingControl_GiftControl, GameLifeSettingControl_ChatroomControl, GameLifeSettingControl_ProfileControl, GameLifeSettingControl_HistoryChatControl, GameLifeSettingControl_AttachBarControl, GameLifeSettingControl_EmotionBoardControl, GameLifeSettingControl_EntranceControl;

@interface GameLifeSettingControl : WXPBGeneratedMessage

@property (retain, nonatomic) GameLifeSettingControl_EntranceControl *entrance;
@property (retain, nonatomic) GameLifeSettingControl_HistoryChatControl *historyChat;
@property (retain, nonatomic) GameLifeSettingControl_ProfileControl *profile;
@property (nonatomic) BOOL disableApi;
@property (retain, nonatomic) GameLifeSettingControl_GiftControl *gift;
@property (retain, nonatomic) GameLifeSettingControl_AttachBarControl *attachBar;
@property (retain, nonatomic) GameLifeSettingControl_EmotionBoardControl *emotionBoard;
@property (retain, nonatomic) GameLifeSettingControl_ChatroomControl *chatroom;

+ (void)initialize;

- (void)setChatroom:(id)a0;
- (id)chatroom;
- (void)setEmotionBoard:(id)a0;
- (id)emotionBoard;
- (void)setAttachBar:(id)a0;
- (id)attachBar;
- (void)setGift:(id)a0;
- (id)gift;
- (void)setDisableApi:(BOOL)a0;
- (BOOL)disableApi;
- (void)setProfile:(id)a0;
- (id)profile;
- (void)setHistoryChat:(id)a0;
- (id)historyChat;
- (void)setEntrance:(id)a0;
- (id)entrance;

@end
