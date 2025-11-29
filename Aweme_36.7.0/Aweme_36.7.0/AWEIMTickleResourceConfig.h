@class NSString, NSArray;

@interface AWEIMTickleResourceConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSArray *emoticonList;
@property (copy, nonatomic) NSArray *resourceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
