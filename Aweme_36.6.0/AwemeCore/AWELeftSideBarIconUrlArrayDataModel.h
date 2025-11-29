@class NSArray, NSString;

@interface AWELeftSideBarIconUrlArrayDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *dark;
@property (retain, nonatomic) NSArray *light;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
