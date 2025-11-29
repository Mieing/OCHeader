@class NSString;

@interface AWELiveLocalLifeBizAttributeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *prefixIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
