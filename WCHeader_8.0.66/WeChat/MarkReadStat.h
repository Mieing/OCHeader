@class NSString;

@interface MarkReadStat : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subScene;
@property (nonatomic) unsigned int commScene;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int exposeTimeMs;
@property (nonatomic) unsigned int feedIndex;
@property (nonatomic) unsigned int autoPlayTimeMs;
@property (nonatomic) BOOL autoPlayWithSound;
@property (nonatomic) unsigned long long startExposeTimeMs;
@property (nonatomic) unsigned int exposeAreaRatio;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int effectiveExposeTimeMs;
@property (nonatomic) unsigned long long startEffectiveExposeTimeMs;
@property (nonatomic) unsigned long long areaId;

+ (void)initialize;

@end
