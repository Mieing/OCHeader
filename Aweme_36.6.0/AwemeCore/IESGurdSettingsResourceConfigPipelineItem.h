@interface IESGurdSettingsResourceConfigPipelineItem : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long updatePolicy;
@property (nonatomic) BOOL disableCache;

+ (id)configWithDictionary:(id)a0;

@end
