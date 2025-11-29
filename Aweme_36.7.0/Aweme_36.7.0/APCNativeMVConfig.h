@class NSString, NSNumber;

@interface APCNativeMVConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateID;
@property (copy, nonatomic) NSNumber *templateSource;
@property (nonatomic) BOOL trackShootEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
