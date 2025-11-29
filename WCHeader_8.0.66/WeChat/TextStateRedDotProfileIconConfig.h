@class NSArray;

@interface TextStateRedDotProfileIconConfig : NSObject

@property (retain, nonatomic) NSArray *durations;
@property (retain, nonatomic) NSArray *parsedDurations;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)modelPropertyBlacklistForConfigTag:(id)a0;
+ (long long)secondsFromDurationString:(id)a0;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })hitDurationForLocation:(long long)a0;
- (void).cxx_destruct;

@end
