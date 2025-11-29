@class NSArray, NSString;

@interface CSJUnionResponseModel : CSJResponseModel

@property (copy) NSArray *creativesAry;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *desc;

+ (void)makeResponseModelWithDictionary:(id)a0 finishBlock:(id /* block */)a1;
+ (id)host_appid;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)setupDataWithDictionary:(id)a0;
- (void)setupCreativesWithDic:(id)a0;
- (void)safeMssdkReportForScene;
- (void)mssdkReportForScene;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
