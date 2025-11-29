@class NSString;

@interface EcsTrackerStep : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sceneName;
@property (retain, nonatomic) NSString *sceneId;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int from;
@property (retain, nonatomic) NSString *log;
@property (nonatomic) BOOL print;
@property (nonatomic) BOOL skip;
@property (nonatomic) unsigned long long time;
@property (nonatomic) unsigned long long addTime;
@property (retain, nonatomic) NSString *extraJson;
@property (retain, nonatomic) NSString *sceneExtraJson;

+ (void)initialize;

@end
