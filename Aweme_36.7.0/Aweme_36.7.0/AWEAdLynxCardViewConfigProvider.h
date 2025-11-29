@interface AWEAdLynxCardViewConfigProvider : NSObject <AWEAdLynxCardInfoProvider>

+ (BOOL)shouldShowInteractiveAICard:(id)a0;
+ (id)adLynxCardComponentWithModel:(id)a0;
+ (BOOL)blockButtonShow:(id)a0;
+ (BOOL)shouldShowAdLynxCard:(id)a0;
+ (void)initialize;

@end
