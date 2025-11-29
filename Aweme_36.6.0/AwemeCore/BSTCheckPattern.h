@class NSDictionary, NSArray, NSString;

@interface BSTCheckPattern : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *scene;
@property (retain, nonatomic) NSArray *pattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
