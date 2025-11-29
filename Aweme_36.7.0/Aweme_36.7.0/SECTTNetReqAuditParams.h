@class NSString, NSArray, TTReqAuditParams, NSURLComponents, NSNumber;

@interface SECTTNetReqAuditParams : NSObject {
    NSNumber *_shareTokenListIncluded;
    NSArray *_tokenContainedHeaders;
}

@property (readonly, nonatomic) TTReqAuditParams *params;
@property (readonly, copy, nonatomic) NSString *matchHost;
@property (readonly, nonatomic) NSURLComponents *urlComponents;
@property (readonly, nonatomic) BOOL shareTokenListIncluded;
@property (readonly, copy, nonatomic) NSArray *tokenContainedHeaders;

- (id)initWithTTReqAuditParams:(id)a0;
- (void).cxx_destruct;

@end
