@class NSString;

@interface RTVCommonBehaviorOption : JSONModel <RTVBehaviorOptionProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *eventPage;
@property (copy, nonatomic) NSString *eventParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelToJSONDictionary;
+ (id)keyMapperKeys;
+ (id)key;

- (void).cxx_destruct;

@end
