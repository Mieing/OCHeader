@class NSString;

@interface SearchListContainerBounceElement : LynxUI

@property (copy, nonatomic) NSString *direction;
@property (copy, nonatomic) id /* block */ frameDidChangeBlock;

+ (id)__lynx_prop_config__190;

- (void)direction:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;
- (void)frameDidChange;

@end
