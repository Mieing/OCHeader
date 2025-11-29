@class NSString;

@interface AWEHPSLOModel : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorDesc;
@property (copy, nonatomic) NSString *errorDomain;
@property (copy, nonatomic) NSString *errorExtra;

+ (id)modelWithNetorkError:(id)a0 responseModel:(id)a1;
+ (id)modelWithStatus:(long long)a0 error:(id)a1;
+ (id)modelWithStatus:(long long)a0 errorCode:(long long)a1 errorDesc:(id)a2;
+ (id)modelWithStatus:(long long)a0 errorCode:(long long)a1 errorDomain:(id)a2 errorDesc:(id)a3 errorExtra:(id)a4;

- (void)p_updateWithNetorkServiceError:(id)a0 responseModel:(id)a1;
- (void)p_updateStatus:(long long)a0 errorCode:(long long)a1 errorDomain:(id)a2 errorDesc:(id)a3 errorExtra:(id)a4;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)isValidWithError:(id *)a0;

@end
