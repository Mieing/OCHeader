@class NSArray, NSString;

@interface BDVoiceOverConfigLabelSegmentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *list;
@property (copy, nonatomic) NSArray *terms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listJSONTransformer;
+ (id)termsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
