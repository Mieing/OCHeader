@class NSArray, NSString;

@interface YataContainerItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *typeArray;
@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
