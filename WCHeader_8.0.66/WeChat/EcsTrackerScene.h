@class NSString, NSMutableArray;

@interface EcsTrackerScene : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sceneName;
@property (retain, nonatomic) NSString *sceneId;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSMutableArray *stepList;

+ (void)initialize;

@end
