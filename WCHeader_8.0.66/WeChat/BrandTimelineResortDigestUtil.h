@interface BrandTimelineResortDigestUtil : MMObject

+ (BOOL)isDigestInfoValid:(id)a0;
+ (id)toJsonWithDigestInfo:(id)a0;
+ (id)genAttrDigestWithBrandTimelineMsgDBDigestInfo:(id)a0 shouldBold:(BOOL)a1;
+ (id)genReportDigestWithBrandTimelineMsgDBDigestInfo:(id)a0;
+ (BOOL)shouldUseResortAttrDigest:(id)a0;
+ (id)genFusionDigestInfo:(id)a0;
+ (id)getBrandTimelineMsgWrapFromDb:(id)a0;

@end
