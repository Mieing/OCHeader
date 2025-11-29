@class NSString;

@interface APCDTOCommonData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long initialScene;
@property (nonatomic) long long type;
@property (nonatomic) BOOL animated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initialSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
