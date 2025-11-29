@class NSMutableDictionary;

@interface WCGeneralPerformanceTool : NSObject

@property (retain, nonatomic) NSMutableDictionary *statDict;

+ (id)sharedInstance;
+ (id)descriptDictOfScene;
+ (void)reportEventToScene:(unsigned long long)a0 params:(id)a1;
+ (BOOL)updateVoiceInputParams:(id)a0 dict:(id)a1;
+ (void)reportEventForScene:(unsigned long long)a0;
+ (void)addKey:(id)a0 object:(id)a1 forScene:(unsigned long long)a2;
+ (void)addTimestampForKey:(id)a0 forScene:(unsigned long long)a1;
+ (unsigned long long)getTimeStampForKey:(id)a0 forScene:(unsigned long long)a1;
+ (void)removeStatDictOfScene:(unsigned long long)a0;

- (id)init;
- (void)addKey:(id)a0 object:(id)a1 forScene:(unsigned long long)a2;
- (void)addTimestampForKey:(id)a0 forScene:(unsigned long long)a1;
- (void)removeStatDictOfScene:(unsigned long long)a0;
- (unsigned long long)getTimeStampForKey:(id)a0 forScene:(unsigned long long)a1;
- (id)statDictOfScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
