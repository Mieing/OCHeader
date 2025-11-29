@class NSString;

@interface RTVFestivalBehaviorOption : JSONModel <RTVBehaviorOptionProtocol>

@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *campaignTaskToken;
@property (copy, nonatomic) NSString *campaignTaskType;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *extra;
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
