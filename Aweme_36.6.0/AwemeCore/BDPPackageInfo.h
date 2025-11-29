@class NSString, NSArray;

@interface BDPPackageInfo : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) long long pkgType;
@property (readonly, nonatomic, getter=isIndependent) BOOL independent;
@property (readonly, nonatomic, getter=isMainPkg) BOOL mainPkg;
@property (readonly, nonatomic, getter=isPluginPkg) BOOL pluginPkg;
@property (readonly, nonatomic, getter=isNormalPkg) BOOL normalPkg;

+ (id)modelPropertyBlacklist;
+ (id)packageWithPath:(id)a0 dict:(id)a1 key:(id)a2 iv:(id)a3 isPlugin:(BOOL)a4;
+ (id)packageWithPath:(id)a0 md5:(id)a1 urls:(id)a2;

- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
