@class NSError, NSDictionary;

@interface BDHybridCertValidateResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *additionInfo;

- (void).cxx_destruct;

@end
