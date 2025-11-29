@class NSString, NSArray;

@interface ACCElementBindResponse : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *msg;
@property (readonly, copy, nonatomic) NSArray *sourceList;
@property (readonly, copy, nonatomic) NSArray *targetList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sourceListJSONTransformer;
+ (id)targetListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
