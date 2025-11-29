@interface VQMProfileInfoApp : WXPBGeneratedMessage

@property (nonatomic) int stateBegin;
@property (nonatomic) int stateFinal;
@property (nonatomic) int stateBeforeAudioStartup;
@property (nonatomic) unsigned long long timestampEnterForegroundAtFirst;
@property (nonatomic) int isCarplayConnectedFinal;
@property (nonatomic) int isPipDisplayedFinal;

+ (id)instanceFromAppStatusInTheCurrent;
+ (id)instanceFromAppStatusInTheBeginning;
+ (void)initialize;

@end
