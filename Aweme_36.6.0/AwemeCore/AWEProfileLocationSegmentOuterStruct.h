@class NSString, NSArray;

@interface AWEProfileLocationSegmentOuterStruct : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *section;
@property (retain, nonatomic) NSArray *area;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)areaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
