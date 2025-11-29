@class NSString;

@interface BrandTimelineMsgDBDigestInfoItem : MMObject

@property (retain, nonatomic) NSString *digest;
@property (nonatomic) BOOL isBold;

- (id)genItemAttrDigest;
- (id)genItemAttrDigestWithoutBold;
- (id)genItemReportDigest;
- (void).cxx_destruct;

@end
