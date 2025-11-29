@class WASemverRange;

@interface WASemverRequirement : NSObject

@property (retain, nonatomic) WASemverRange *range;
@property (retain, nonatomic) WASemverRequirement *req1;
@property (nonatomic) unsigned long long op;
@property (retain, nonatomic) WASemverRequirement *req2;

- (id)initWithRange:(id)a0;
- (id)initWithReq1:(id)a0 op:(unsigned long long)a1 req2:(id)a2;
- (id)initWithReqStr:(id)a0;
- (id)parseString2Req:(id)a0 type:(unsigned long long)a1;
- (id)createCaretRequirement:(id)a0;
- (id)createTildeRequirement:(id)a0;
- (BOOL)isSatisfiedBy:(id)a0;
- (void).cxx_destruct;

@end
