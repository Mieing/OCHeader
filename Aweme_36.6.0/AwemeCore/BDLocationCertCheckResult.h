@class NSError, NSDictionary;

@interface BDLocationCertCheckResult : NSObject

@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) BOOL isEmptyCert;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
