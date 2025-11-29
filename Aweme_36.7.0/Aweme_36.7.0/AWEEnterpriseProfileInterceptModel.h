@class NSString, NSArray;

@interface AWEEnterpriseProfileInterceptModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needLimitEditProfile;
@property (copy, nonatomic) NSString *nicknameEditLimitToast;
@property (copy, nonatomic) NSString *avatarEditLimitToast;
@property (copy, nonatomic) NSArray *alternativeNickNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
