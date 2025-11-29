@class NSString, NSNumber, NSDictionary;

@interface HTSLiveApiSimpleResponse : NSObject <HTSLiveApiSimpleResponseProtocol>

@property (readonly, nonatomic) id data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *logID;
@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSNumber *errNumber;
@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) NSDictionary *extra;
@property (readonly, nonatomic) id jsonObj;

- (void)setRequestIdStr:(id)a0;
- (BOOL)isSuccessResponse;
- (id)initWithJsonObj:(id)a0;
- (void)setLogIDStr:(id)a0;
- (id)decodeDataWithModelClass:(Class)a0 error:(id *)a1;
- (BOOL)hasPrompts;
- (BOOL)hasServerTime;
- (id)decodeDataWithModelClass:(Class)a0;
- (void).cxx_destruct;
- (id)serverTime;
- (id)prompts;

@end
