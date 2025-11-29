@class NSString, NSDictionary, NSArray;

@interface BDUGFlowAuthResult : NSObject

@property (nonatomic) long long action;
@property (nonatomic) BOOL configMismatch;
@property (copy, nonatomic) NSString *certID;
@property (copy, nonatomic) NSString *positionCertID;
@property (copy, nonatomic) NSString *ruleID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSArray *lastCertIDs;

- (void).cxx_destruct;

@end
