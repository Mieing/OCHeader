@class NSArray, NSString;

@interface AWEPublishPrivacyPermissionModel : NSObject <NSCoding, NSCopying, AWEPublishPrivacyPermissionData>

@property (copy, nonatomic) NSArray *whiteUids;
@property (copy, nonatomic) NSArray *blockUids;
@property (nonatomic) long long privacyPermissionType;
@property (copy, nonatomic) NSArray *whiteUserList;
@property (copy, nonatomic) NSArray *blockUserList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsFromJSONString:(id)a0;
+ (id)JSONStringFromModels:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToObject:(id)a0;

@end
