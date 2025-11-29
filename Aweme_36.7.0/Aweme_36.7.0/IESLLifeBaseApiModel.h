@class NSString, NSNumber, NSDictionary;

@interface IESLLifeBaseApiModel : MTLModel <MTLJSONSerializing>

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

+ (id)JSONKeyPathsByPropertyKey;

- (void)mergeAllPropertyKeysWithRequestIdAndLogPassback;
- (void)_mergeAllPropertyKeysWithRequestId:(id)a0 logPassback:(id)a1 checkRequestClassFirst:(BOOL)a2;
- (void)_mergeAllPropertyKeysWithRequestId:(id)a0 checkRequestClassFirst:(BOOL)a1;
- (void)_mergeAllPropertyKeysWithLogPassback:(id)a0;
- (void)mergeAllPropertyKeysWithRequestIdAndLogPassbackOpt;
- (void)mergeAllPropertyKeysWithRequestId;
- (void)mergeAllPropertyKeysWithRequestIdOpt;
- (void)mergeAllPropertyKeysWithLogPassback;
- (BOOL)alidate:(id *)a0;
- (void).cxx_destruct;

@end
