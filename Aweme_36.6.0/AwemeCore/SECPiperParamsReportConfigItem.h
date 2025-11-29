@class NSArray;

@interface SECPiperParamsReportConfigItem : NSObject

@property (copy, nonatomic) NSArray *namespaceArr;
@property (copy, nonatomic) NSArray *moduleArr;
@property (copy, nonatomic) NSArray *bridgeNameArr;
@property (copy, nonatomic) NSArray *inParamNameArr;
@property (copy, nonatomic) NSArray *outParamNameArr;
@property (nonatomic) unsigned long long sampleRate;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
