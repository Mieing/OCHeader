@class NSString;

@interface AWEACCRouterImpl : NSObject <ACCRouterProtocolD>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferToURLString:(id)a0;
- (id)viewControllerForURLString:(id)a0;
- (BOOL)canOpenURLString:(id)a0;
- (void)transferToURLStringWithFormat:(id)a0;
- (id)URLString:(id)a0 byAddingQueryDict:(id)a1;

@end
