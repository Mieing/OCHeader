@class NSString, NSArray, NSDictionary;

@interface BDXBridgeImCreateGroupMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSString *createSource;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupIcon;
@property (copy, nonatomic) NSString *groupDesc;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSArray *uidList;
@property (copy, nonatomic) NSDictionary *bizExtension;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
