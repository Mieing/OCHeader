@class NSString;

@interface AWEIMFansTagItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagText;
@property (nonatomic) long long priority;
@property (nonatomic) long long intValue;
@property (nonatomic) long long expireTimeInMs;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
