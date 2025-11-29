@interface AWEGeneralErrorHandler : NSObject

+ (id)defaultHandler;

- (BOOL)handleError:(id)a0 fromView:(id)a1;
- (BOOL)handleError:(id)a0 fromViewController:(id)a1;
- (BOOL)handleError:(id)a0 fromViewController:(id)a1 view:(id)a2;
- (BOOL)handleError:(id)a0 fromViewController:(id)a1 view:(id)a2;

@end
