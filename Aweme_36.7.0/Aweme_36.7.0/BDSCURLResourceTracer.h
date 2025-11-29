@class NSURLSession, BDByteScreenCastContext;

@interface BDSCURLResourceTracer : NSObject

@property (retain, nonatomic) BDByteScreenCastContext *context;
@property (retain, nonatomic) NSURLSession *urlSession;

- (void)traceURLString:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
