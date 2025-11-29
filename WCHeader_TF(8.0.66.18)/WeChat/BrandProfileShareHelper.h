@interface BrandProfileShareHelper : MMObject

+ (id)genDictExtraInfoWithContact:(id)a0 bizNameCard:(id)a1;
+ (id)certificationImageWithCertFlag:(unsigned int)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)bizNameCardProtectedInfoWithContent:(id)a0;
+ (BOOL)shouldBrandContactShareCardShowCertificationFlag:(id)a0 protectedInfo:(id)a1;
+ (BOOL)shouldBrandContactShareCardShowPersonalVerifyIdentity:(id)a0 protectedInfo:(id)a1;
+ (id)brandContactShareCardCertificationImage:(id)a0 protectedInfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)brandContactShareCardPersonalVerifyIdentity:(id)a0 protectedInfo:(id)a1;

@end
