@class NSMutableArray, MMLiveBeautyBadgeCollection;

@interface MMLiveFilterPackage : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) MMLiveBeautyBadgeCollection *badges;

+ (id)filterPackageInResourcePackage:(id)a0;
+ (id)filterPackageInLocalDirectory:(id)a0 withConfigurationPath:(id)a1;

- (void).cxx_destruct;

@end
