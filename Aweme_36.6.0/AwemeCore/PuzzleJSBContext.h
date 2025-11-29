@class NSString;

@interface PuzzleJSBContext : NSObject <AnnieBridgeSessionDecoratable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (void)decorateJSBContext:(id)a0 withInfo:(id)a1;

- (id)apiContext;
- (void)setApiContext:(id)a0;
- (void)setContextWithMessage:(id)a0;
- (void)setContextWithLynxServiceInfo:(id)a0;
- (id)pageContext;
- (void)setPageContext:(id)a0;

@end
