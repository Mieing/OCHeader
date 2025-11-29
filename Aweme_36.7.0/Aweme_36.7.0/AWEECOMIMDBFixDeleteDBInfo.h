@class NSString;

@interface AWEECOMIMDBFixDeleteDBInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long userID;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *pathUserSuffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
