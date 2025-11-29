@class NSError, NSDictionary;

@interface CJPayIntelligenceTaskResult : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
