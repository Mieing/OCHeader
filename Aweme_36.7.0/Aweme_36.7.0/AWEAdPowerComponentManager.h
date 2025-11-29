@protocol AWECommerceComponentContext;

@interface AWEAdPowerComponentManager : NSObject <AWECommerceComponentProtocol> {
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ startTimestamp;
}

@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)didDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
