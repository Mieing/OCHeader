@class NSString;

@interface AWERTVXRRouter : NSObject <RTVXRRouterInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferToURLString:(id)a0;
- (void)openLiveScheme:(id)a0;
- (void)transferToHTTPURLString:(id)a0;
- (id)targetViewControllerWithSchema:(id)a0;
- (id)schemaWithHTTPURLString:(id)a0;

@end
