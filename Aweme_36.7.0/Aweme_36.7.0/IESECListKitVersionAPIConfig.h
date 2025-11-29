@class NSString, NSArray;

@interface IESECListKitVersionAPIConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long minVersionNumber;
@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSArray *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
