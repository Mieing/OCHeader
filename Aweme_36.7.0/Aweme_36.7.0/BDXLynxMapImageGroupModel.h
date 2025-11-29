@class NSArray, NSString;

@interface BDXLynxMapImageGroupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *loadParams;
@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
