@class NSMutableDictionary;

@interface StreamInputResult : MMObject

@property (retain, nonatomic) NSMutableDictionary *results;

+ (id)filterVoiceTransResult:(id)a0 withVoiceId:(id)a1;

- (id)init;
- (void)UpdateVoiceTransResult:(id)a0;
- (id)GetResultString;
- (id)sortSteamInputResult;
- (id)GetKeywordTimeResult;
- (void).cxx_destruct;

@end
