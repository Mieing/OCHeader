@class NSString, AWEOFGBridgeContext;

@interface AWEOFGBridgeMethod : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *methodName;
@property (retain, nonatomic) AWEOFGBridgeContext *context;
@property (retain, nonatomic) Class paramModelClass;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setHandler:(id /* block */)a0;
- (id /* block */)handler;

@end
