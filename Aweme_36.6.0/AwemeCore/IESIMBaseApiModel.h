@class NSString, NSNumber, NSDictionary;

@interface IESIMBaseApiModel : MTLModel <MTLJSONSerializing>

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
- (BOOL)awe_validateValue:(inout id *)a0 forKey:(id)a1 error:(out id *)a2;
- (BOOL)awe_validate:(id *)a0;
- (void).cxx_destruct;

@end
