@class NSString, NSDictionary;

@interface AWEIMEmoticonInfoAnimateIconModel : MTLModel <MTLJSONSerializing, AWEIMEmoticonInfoAnimateIconModelProtocol>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
