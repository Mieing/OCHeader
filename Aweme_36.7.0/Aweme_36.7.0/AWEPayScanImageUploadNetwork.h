@interface AWEPayScanImageUploadNetwork : CJPayBaseRequest

+ (id)buildUrl:(id)a0;
+ (void)fetchUploadTokenWith:(id)a0 completion:(id /* block */)a1;
+ (void)reportImageUploadResult:(id)a0 payInfoStr:(id)a1 completion:(id /* block */)a2;

@end
