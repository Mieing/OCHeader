@class AWESocialRelationRequest;

@interface AWESocialRelationObserver : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) AWESocialRelationRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 handler:(id /* block */)a1;
- (void)notify:(id)a0;

@end
