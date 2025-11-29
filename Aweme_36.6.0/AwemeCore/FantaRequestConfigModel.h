@class NSString, NSDictionary, NSArray;

@interface FantaRequestConfigModel : NSObject

@property (copy, nonatomic) NSString *requestPath;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (copy, nonatomic) NSArray *headerFieldsWhiteList;
@property (copy, nonatomic) NSArray *requestParam;
@property (copy, nonatomic) NSDictionary *requestParamConfig;
@property (copy, nonatomic) NSDictionary *requestFilter;
@property (copy, nonatomic) NSString *requestInsertMethod;
@property (copy, nonatomic) NSString *injectConfigKey;

+ (id)createWithConfig:(id)a0;

- (unsigned long long)paramTypeForPath:(id)a0;
- (unsigned long long)paramTypeForPath:(id)a0 value:(id)a1 error:(id *)a2;
- (unsigned long long)injectMethod;
- (void).cxx_destruct;
- (id)description;

@end
