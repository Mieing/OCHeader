@class NSString;

@interface IESECShopLiveJSBridge : NSObject

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) id /* block */ handler;

+ (id)bridgeWithMethod:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
