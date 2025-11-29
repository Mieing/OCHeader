@class NSArray, NSString;

@interface AWECommonButtonModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *buttonList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
