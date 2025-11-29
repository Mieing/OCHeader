@class NSArray, SECTTNetReqAuditParams;

@interface SECTTNetAuditHeaderResult : NSObject

@property (copy, nonatomic) NSArray *hitRuleNames;
@property (nonatomic) BOOL removeAllHeaderContainsToken;
@property (copy, nonatomic) NSArray *removedHeaderList;
@property (nonatomic) unsigned long long eventSampleRate;
@property (retain, nonatomic) SECTTNetReqAuditParams *params;

- (id)calculateToTTReqAuditResult;
- (void).cxx_destruct;

@end
