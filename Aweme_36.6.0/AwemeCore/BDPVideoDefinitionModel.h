@class NSArray, NSString;

@interface BDPVideoDefinitionModel : BDPBasePluginModel

@property (copy, nonatomic) NSArray *list;
@property (copy, nonatomic) NSString *defaultDefinition;
@property (nonatomic) BOOL adaptiveBitrate;
@property (copy, nonatomic) NSString *format;
@property (nonatomic) long long duration;

+ (id)modelContainerPropertyGenericClass;
+ (id)definitionNameOrderList;

- (id)defaultDefinitionItem;
- (id)definitionWithName:(id)a0;
- (id)definitionProps;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
