@class NSArray, NSDictionary;

@interface CJPaySKMScanUploadConfig : JSONModel

@property (retain, nonatomic) NSArray *sellProductCodeList;
@property (nonatomic) long long cleanTimeOut;
@property (retain, nonatomic) NSDictionary *cutExpandScale;
@property (nonatomic) double maxUploadSize;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
