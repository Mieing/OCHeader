@class NSString, NSArray, NSError, SECStopWatch;

@interface SECNetDetectResult : NSObject

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *strategyName;
@property (copy, nonatomic) NSString *ruleName;
@property (nonatomic) unsigned long long sampleRate;
@property (copy, nonatomic) NSArray *protectActions;
@property (copy, nonatomic) NSArray *mockedProtectActions;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SECStopWatch *metrics;
@property (copy, nonatomic) NSArray *URLRelatedLogs;

- (void).cxx_destruct;

@end
