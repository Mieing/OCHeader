@class NSString;

@interface AWELiteVibratorInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
