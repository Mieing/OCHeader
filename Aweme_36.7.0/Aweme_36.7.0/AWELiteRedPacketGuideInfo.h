@class NSString;

@interface AWELiteRedPacketGuideInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long publishCount;
@property (nonatomic) long long publishLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
