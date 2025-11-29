@class NSArray, NSString;

@interface BDXLynxMapTextGroupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *textItems;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) double contentPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
