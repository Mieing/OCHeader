@class NSString, LensPackage, PersonalDesigner, LensIcon;

@interface EmoticonLensInfo : MMObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) PersonalDesigner *designer;
@property (retain, nonatomic) LensPackage *package;
@property (retain, nonatomic) LensIcon *iconInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_designer;
+ (void)PBArrayAdd_package;
+ (void)PBArrayAdd_iconInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
