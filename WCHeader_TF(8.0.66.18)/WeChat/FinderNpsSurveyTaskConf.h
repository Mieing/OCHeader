@class NSString, NSMutableArray;

@interface FinderNpsSurveyTaskConf : WXPBGeneratedMessage

@property (nonatomic) unsigned long long taskId;
@property (nonatomic) unsigned int conditions;
@property (retain, nonatomic) NSMutableArray *feedPos;
@property (nonatomic) unsigned int deliverScenes;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long expireTime;
@property (nonatomic) unsigned int excludeDays;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) float delayAppearTime;
@property (nonatomic) float autoDisappearTime;
@property (nonatomic) unsigned long long feedMediaTypes;
@property (nonatomic) BOOL allFeedPos;
@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned int instExposeLimit;
@property (nonatomic) unsigned int showPosType;
@property (nonatomic) unsigned int skipFeedCount;
@property (nonatomic) unsigned int checkUinFilter;
@property (nonatomic) unsigned int interruptedAction;

+ (void)initialize;

- (BOOL)canBeTriggeredByEvent:(unsigned int)a0 contextInfo:(id)a1;
- (BOOL)isRelativeIndexInFeedPositonList:(unsigned long long)a0;

@end
