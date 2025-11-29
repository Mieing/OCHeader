@class NSString;

@interface RTVGameBehaviorOption : JSONModel <RTVBehaviorOptionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelToJSONDictionary;
+ (id)keyMapperKeys;
+ (id)key;


@end
