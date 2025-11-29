@protocol AWECommerceComponentContext;

@interface AWEAdStartActionManager : NSObject <AWECommerceComponentProtocol> {
    void /* unknown type, empty encoding */ actionManager;
}

@property (nonatomic, retain) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
