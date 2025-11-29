@class IESLiveWhiteCategoryCert_SubCertInfo, IESLiveWhiteCategoryCert_CertIcon;

@interface IESLiveWhiteCategoryCert : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveWhiteCategoryCert_CertIcon *certIcon;
@property (nonatomic) BOOL hasCertIcon;
@property (retain, nonatomic) IESLiveWhiteCategoryCert_SubCertInfo *subCertInfo;
@property (nonatomic) BOOL hasSubCertInfo;

+ (id)descriptor;

@end
