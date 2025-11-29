@class NSString;

@interface AWEUserNameDowngradeStrategy : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *scene;
@property (readonly, nonatomic) unsigned long long downgradeType;
@property (readonly, copy, nonatomic) NSString *customString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downgradeTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
