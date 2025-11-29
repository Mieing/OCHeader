@class NSMutableArray, MMLiveBeautyBadgeCollection;

@interface MMLiveMakeupPackage : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) MMLiveBeautyBadgeCollection *badges;

+ (id)makeupPackageInResourcePackage:(id)a0;
+ (id)makeupPackageInLocalDirectory:(id)a0 withConfigurationPath:(id)a1;

- (void).cxx_destruct;

@end
