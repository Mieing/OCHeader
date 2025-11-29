@class NSNumber, NSString;

@interface AWENewScanImpl.ScanRiskURLResponseModel : AWEBaseApiModel

@property (nonatomic, retain) NSNumber *riskLevel;
@property (nonatomic, retain) NSString *riskHostUrlString;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
