@class NSString, NSDictionary, NSArray;

@interface AWEHPTabLandingModel : NSObject

@property (copy, nonatomic) NSString *targetTabId;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *bizCommunicationParams;
@property (copy, nonatomic) NSString *callerId;
@property (copy, nonatomic) NSArray *previousTabIds;
@property (copy, nonatomic) NSString *landingScene;
@property (copy, nonatomic) NSString *originSchema;
@property (copy, nonatomic) NSString *landingPitayaTraceId;
@property (copy, nonatomic) NSString *landingStrategyId;
@property (copy, nonatomic) NSString *landingStrategyType;

- (id)initWithTargetTabID:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;

@end
