@class NSString;

@interface AWEIMLightInteractionEntryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *btn;
@property (copy, nonatomic) NSString *btnIconUrl;
@property (copy, nonatomic) NSString *bgColorStr;
@property (copy, nonatomic) NSString *pushIconUrl;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
