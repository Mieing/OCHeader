@class NSError;

@interface AWEPerfEvaluateSmartServiceResult : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) float score;

+ (id)makeSuccessResultWithScore:(float)a0;
+ (id)makeFailureWithError:(id)a0;

- (void).cxx_destruct;

@end
