@class NSMutableArray;
@protocol BDPPageProtocol;

@interface BDPPageGoBackIntercept : NSObject

@property (nonatomic) BOOL needIntercept;
@property (nonatomic) BOOL isHandling;
@property (weak, nonatomic) id<BDPPageProtocol> page;
@property (retain, nonatomic) NSMutableArray *recordList;

- (BOOL)canPopToLastPage;
- (void)triggerBackInterceptionEvent:(id)a0;
- (void)setNavigateBackInterceptionSync:(id)a0 callback:(id /* block */)a1;
- (id)getLastInterceptInfo;
- (void)uploadTrackingPointIfNeeded;
- (void).cxx_destruct;
- (id)initWithPage:(id)a0;

@end
