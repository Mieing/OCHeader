@class NSDictionary, NSString;

@interface AFDABCloneConfigModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSDictionary *aweDict;
@property (readonly, copy, nonatomic) NSDictionary *byteDict;
@property (readonly, copy, nonatomic) NSDictionary *platDict;
@property (readonly, copy, nonatomic) NSDictionary *abDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
