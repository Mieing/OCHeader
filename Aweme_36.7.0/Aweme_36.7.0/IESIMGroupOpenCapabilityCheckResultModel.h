@class NSError;

@interface IESIMGroupOpenCapabilityCheckResultModel : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;

- (id)initWithSuccess:(BOOL)a0 errorMessage:(id)a1;
- (void).cxx_destruct;

@end
