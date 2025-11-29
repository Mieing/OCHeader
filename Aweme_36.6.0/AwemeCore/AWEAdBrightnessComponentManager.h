@protocol AWECommerceComponentContext;

@interface AWEAdBrightnessComponentManager : NSObject <AWECommerceComponentProtocol> {
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ abTestInfo;
    void /* unknown type, empty encoding */ recordInfo;
    void /* unknown type, empty encoding */ processState;
}

@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)didDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
