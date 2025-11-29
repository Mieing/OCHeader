@interface VoiceInputBehavior : WXPBGeneratedMessage

@property (nonatomic) int cancel;
@property (nonatomic) int send;
@property (nonatomic) int click;
@property (nonatomic) int longClick;
@property (nonatomic) long long longClickTime;
@property (nonatomic) int textClick;
@property (nonatomic) int textChangeCount;
@property (nonatomic) long long textChangeTime;
@property (nonatomic) int textChangeReturn;
@property (nonatomic) long long voiceInputTime;
@property (nonatomic) int fail;
@property (nonatomic) int clear;
@property (nonatomic) int smileIconClick;
@property (nonatomic) int voiceIconClick;
@property (nonatomic) int fullScreenVoiceLongClick;
@property (nonatomic) long long fullScreenVoiceLongClickTime;
@property (nonatomic) int showInit;
@property (nonatomic) long long initChoose;
@property (nonatomic) int chooseArea;
@property (nonatomic) int chooseCantonese;
@property (nonatomic) int setlanguage;
@property (nonatomic) int setSwitchCantonese;
@property (nonatomic) int setDefaultLanguage;

+ (void)initialize;

@end
