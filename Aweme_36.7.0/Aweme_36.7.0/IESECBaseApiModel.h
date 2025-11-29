@class NSString, NSNumber, NSDictionary;

@interface IESECBaseApiModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)mergeAllPropertyKeysWithRequestIdAndLogPassback;
- (void)_mergeAllPropertyKeysWithLogPassback:(id)a0;
- (void)mergeAllPropertyKeysWithRequestId;
- (void)mergeAllPropertyKeysWithLogPassback;
- (void)_mergeAllPropertyKeysWithRequestId:(id)a0;
- (void)_mergeAllPropertyKeysWithRequestId:(id)a0 logPassback:(id)a1;
- (id)netPerfMetrics;
- (void).cxx_destruct;
- (BOOL)validate:(id *)a0;

@end
