@class NSString, NSNumber, NSDictionary;

@interface ACCBaseApiModel : MTLModel <MTLJSONSerializing>

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

- (void)_mergeAllPropertyKeysWithLogPassback:(id)a0;
- (void)mergeAllPropertyKeysWithRequestId;
- (void)mergeAllPropertyKeysWithLogPassback;
- (void)_mergeAllPropertyKeysWithRequestId:(id)a0;
- (void).cxx_destruct;
- (BOOL)validate:(id *)a0;
- (BOOL)validateValue:(inout id *)a0 forKey:(id)a1 error:(out id *)a2;

@end
