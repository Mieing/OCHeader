@class NSString;

@interface AFDRichAwemeImageCacheConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long memorySize;
@property (nonatomic) long long diskSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
