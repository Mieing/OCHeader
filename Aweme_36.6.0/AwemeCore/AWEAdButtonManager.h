@protocol AWECommerceComponentContext;

@interface AWEAdButtonManager : NSObject <AWECommerceComponentProtocol, AWECommerceSwiftImpl.AdButtonManagerProtocol>

@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)renderDelayWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
