@class NSArray, NSString;

@interface BDPVideoDefinitionModel : BDPBasePluginModel

@property (copy, nonatomic) NSArray *list;
@property (copy, nonatomic) NSString *defaultDefinition;
@property (nonatomic) BOOL disableDowngradeSuperResolution;
@property (nonatomic) BOOL adaptiveBitrate;
@property (copy, nonatomic) NSString *format;
@property (nonatomic) long long duration;

+ (id)modelContainerPropertyGenericClass;
+ (id)convertDefinitionTypeToString:(unsigned long long)a0;
+ (id)definitionNameOrderList;
+ (BOOL)definitionCanDowngrade:(id)a0;
+ (id)downgradeDefinition:(id)a0;

- (id)defaultDefinitionItem;
- (id)definitionWithName:(id)a0;
- (id)definitionProps;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
