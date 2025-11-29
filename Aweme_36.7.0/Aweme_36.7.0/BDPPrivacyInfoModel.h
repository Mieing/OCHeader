@class NSString, NSArray;

@interface BDPPrivacyInfoModel : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) BOOL needAuthorization;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
