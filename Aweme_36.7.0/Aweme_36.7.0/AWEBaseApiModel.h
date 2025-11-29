@class NSString, NSNumber, NSDictionary;

@interface AWEBaseApiModel : MTLModel <MTLJSONSerializing>

@property (class, nonatomic) BOOL fixMergePropertyInfiniteLoop;

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)validate:(id *)a0;
- (BOOL)validateValue:(inout id *)a0 forKey:(id)a1 error:(out id *)a2;
- (void)mergeAllPropertyKeysWithRequestIdAndLogPassback;
- (id)imprId;
- (BOOL)awe_validateValue:(inout id *)a0 forKey:(id)a1 error:(out id *)a2;
- (BOOL)awe_validate:(id *)a0;
- (void)_mergeAllPropertyKeysWithRequestId:(id)a0 logPassback:(id)a1 checkRequestClassFirst:(BOOL)a2;
- (void)_mergeAllPropertyKeysWithRequestId:(id)a0 checkRequestClassFirst:(BOOL)a1;
- (void)_mergeAllPropertyKeysWithLogPassback:(id)a0;
- (void)mergeAllPropertyKeysWithRequestIdAndLogPassbackOpt;
- (void)mergeAllPropertyKeysWithRequestId;
- (void)mergeAllPropertyKeysWithRequestIdOpt;
- (void)mergeAllPropertyKeysWithLogPassback;
- (void)awe_mergeAllPropertyKeysWithRequestId:(id)a0 logPassback:(id)a1;
- (void)sendErrorBackActionWithSet:(id)a0 currentObj:(id)a1 errorType:(id)a2;
- (void)awe_mergeAllPropertyKeysWithRequestId:(id)a0 logPassback:(id)a1 andSetBack:(id)a2 andDefaultRecusiveCount:(long long)a3;
- (void)awe_mergeAllPropertyKeysWithRequestIdAndLogPassback;
- (void).cxx_destruct;

@end
