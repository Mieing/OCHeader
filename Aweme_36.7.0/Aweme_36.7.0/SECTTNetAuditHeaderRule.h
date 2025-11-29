@class NSString, NSArray, SECURLTrie, SECTTNetAuditHeaderResult;

@interface SECTTNetAuditHeaderRule : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *hostRule;
@property (nonatomic) unsigned long long pathRuleCount;
@property (retain, nonatomic) SECURLTrie *pathRule;
@property (nonatomic) BOOL detectHostOutSharedTokenList;
@property (retain, nonatomic) SECTTNetAuditHeaderResult *result;

+ (BOOL)isValidDict:(id)a0;
+ (id)allowedKeys;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
