@class NSArray, NSString;

@interface BDSCRedirectURLConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableForAll;
@property (copy, nonatomic) NSArray *deviceNameContainArray;
@property (copy, nonatomic) NSArray *deviceNamePrefixArray;
@property (copy, nonatomic) NSArray *modelNameContainArray;
@property (copy, nonatomic) NSArray *modelNamePrefixArray;
@property (copy, nonatomic) NSArray *manufacturerContainArray;
@property (copy, nonatomic) NSArray *manufacturerPrefixArray;
@property (copy, nonatomic) NSArray *manufacturerCheckStatusArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (BOOL)enableForDeviceName:(id)a0 modelName:(id)a1 manufacturer:(id)a2;
- (BOOL)enableCheckStatusForManufacturer:(id)a0;
- (void).cxx_destruct;

@end
