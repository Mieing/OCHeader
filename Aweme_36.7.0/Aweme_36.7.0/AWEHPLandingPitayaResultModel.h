@class NSDictionary, NSString, NSArray;

@interface AWEHPLandingPitayaResultModel : MTLModel <MTLJSONSerializing, AWEHPLandingPitayaResultModelProtocol>

@property (retain, nonatomic) NSDictionary *rawData;
@property (readonly, nonatomic) NSString *pitayaTraceId;
@property (readonly, nonatomic) long long limitCount;
@property (readonly, nonatomic) NSArray *strategys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateResultModelWithRawData:(id)a0 error:(id *)a1;
+ (id)strategysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
