@class NSString, NSArray;

@interface AWEPOIAMapDirectionRoutePath : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) NSArray *steps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)stepsJSONTransformer;
+ (id)durationJSONTransformer;

- (void).cxx_destruct;

@end
