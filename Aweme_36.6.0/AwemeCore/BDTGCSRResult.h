@class NSString, NSError;

@interface BDTGCSRResult : NSObject

@property (copy, nonatomic) NSString *csr;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int attemptCount;

- (void).cxx_destruct;

@end
