@class NSError, NSDictionary;

@interface BDPrivacyCertValidateResult : NSObject

@property (nonatomic) BOOL noCert;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *config;

+ (id)resultWithError:(id)a0;

- (id)certConfiguration;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)isValid;

@end
