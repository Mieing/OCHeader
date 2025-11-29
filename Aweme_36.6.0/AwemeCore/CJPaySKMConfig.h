@class NSDictionary, CJPaySKMScanUploadConfig;

@interface CJPaySKMConfig : JSONModel

@property (copy, nonatomic) NSDictionary *addrs;
@property (copy, nonatomic) NSDictionary *payerPageDegraded;
@property (retain, nonatomic) CJPaySKMScanUploadConfig *qrCodeScanUpload;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
