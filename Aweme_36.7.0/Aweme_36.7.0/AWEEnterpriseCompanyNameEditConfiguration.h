@interface AWEEnterpriseCompanyNameEditConfiguration : NSObject

@property (copy, nonatomic) id /* block */ viewForSupplementaryElementRefreshBlock;
@property (copy, nonatomic) id /* block */ referenceSizeForHeaderBlock;
@property (copy, nonatomic) id /* block */ checkAuditSwitch;
@property (copy, nonatomic) id /* block */ startPickImageBlock;
@property (copy, nonatomic) id /* block */ imageCountChangeBlock;
@property (nonatomic) double kPadding;
@property (nonatomic) long long kMaxUploadImageCount;

- (void).cxx_destruct;

@end
