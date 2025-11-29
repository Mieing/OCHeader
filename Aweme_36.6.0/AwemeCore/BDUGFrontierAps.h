@class NSString, BDUGFrontierAlert;

@interface BDUGFrontierAps : NSObject

@property (retain, nonatomic) BDUGFrontierAlert *alert;
@property (nonatomic) long long badge;
@property (copy, nonatomic) NSString *soundFileName;
@property (copy, nonatomic) NSString *threadID;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *interruptionLevel;

- (id)initWithAlert:(id)a0 apsPayload:(id)a1;
- (void).cxx_destruct;

@end
