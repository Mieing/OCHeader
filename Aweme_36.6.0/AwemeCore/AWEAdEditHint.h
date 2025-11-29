@class NSString;

@interface AWEAdEditHint : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *commentHint;
@property (nonatomic) double weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
