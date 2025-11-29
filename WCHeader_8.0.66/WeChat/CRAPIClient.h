@class CRRequestSession;

@interface CRAPIClient : NSObject

@property (retain, nonatomic) CRRequestSession *session;
@property (nonatomic) BOOL enabled;

- (id)initWithSession:(id)a0;
- (void)cancelAllRequests;
- (void)dealloc;
- (void).cxx_destruct;

@end
