@class NSString;

@interface NewLifeClientVersionInfo : NSObject

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int buildTime;
@property (retain, nonatomic) NSString *buildTimeString;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *featureId;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *revision;
@property (nonatomic) unsigned int lastVersion;
@property (nonatomic) unsigned int lastBuildTime;
@property (retain, nonatomic) NSString *lastBuildTimeString;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)current;
+ (unsigned int)convertTimestampFromString:(id)a0;
+ (id)convertStringFromTimestamp:(unsigned int)a0;
+ (id)dateFormatter;

- (BOOL)hasChanged;
- (void)updateLastVersionAndLastBuildTime;
- (void).cxx_destruct;

@end
