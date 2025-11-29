@class NSString;

@interface AWENearbyAttributedLabelBaseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;

- (void).cxx_destruct;

@end
