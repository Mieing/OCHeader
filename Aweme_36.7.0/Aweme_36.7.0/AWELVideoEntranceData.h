@class NSArray, NSString;

@interface AWELVideoEntranceData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *meta;
@property (copy, nonatomic) NSArray *play;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaJSONTransformer;
+ (id)playJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
