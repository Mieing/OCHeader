@class NSArray, NSString;

@interface AFDPlayRemoteUnsupportConifg : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *infos;
@property (copy, nonatomic) NSString *defaultDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
