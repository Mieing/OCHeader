@class NSArray, NSString;

@interface AWEVideoDraftPrivacyExtraModel : NSObject <NSCoding, NSCopying, ACCRepoDraftPrivacyExtraData>

@property (nonatomic) unsigned long long partOfVisibleStatus;
@property (copy, nonatomic) NSArray *partOfVisibleUsers;
@property (copy, nonatomic) NSString *partOfVisibleUsersJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getJsonStringWithUserModels:(id)a0;
+ (id)getUserModelsWithJsonString:(id)a0;

- (id)partOfVisibleUserIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToObject:(id)a0;

@end
