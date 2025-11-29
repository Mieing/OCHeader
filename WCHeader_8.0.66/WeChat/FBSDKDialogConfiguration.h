@class NSArray, NSString, NSURL;

@interface FBSDKDialogConfiguration : NSObject <FBSDKCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *appVersions;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0 URL:(id)a1 appVersions:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
