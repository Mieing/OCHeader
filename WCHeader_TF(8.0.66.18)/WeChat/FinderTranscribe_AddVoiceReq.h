@class NSString, NSData, NSMutableArray;

@interface FinderTranscribe_AddVoiceReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *voiceId;
@property (retain, nonatomic) NSData *voiceData;
@property (nonatomic) int encodeType;
@property (nonatomic) long long offset;
@property (nonatomic) long long totalLen;
@property (nonatomic) BOOL isSync;
@property (nonatomic) int resultTimeline;
@property (nonatomic) BOOL isAlwaysVadSpeak;
@property (nonatomic) BOOL enableSentPunc;
@property (nonatomic) int spkClusterNum;
@property (nonatomic) BOOL enableEmotion;
@property (nonatomic) int recoResultType;
@property (nonatomic) BOOL enableLangid;
@property (nonatomic) int langidMode;
@property (nonatomic) int sentSegMaxlen;
@property (retain, nonatomic) NSMutableArray *adaptWords;
@property (retain, nonatomic) NSString *adaptText;
@property (nonatomic) float adaptTextLambda;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) int sedMode;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) long long utteranceBeginTime;
@property (nonatomic) BOOL hasNormalSpeak;

+ (void)initialize;

@end
