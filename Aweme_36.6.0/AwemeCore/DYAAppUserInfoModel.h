@class NSArray, NSString;

@interface DYAAppUserInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL assistRegister;
@property (copy, nonatomic) NSArray *relationUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relationUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
