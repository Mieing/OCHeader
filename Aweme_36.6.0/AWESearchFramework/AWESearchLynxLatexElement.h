@class NSString, LatexView;

@interface AWESearchLynxLatexElement : LynxUI

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) LatexView *latexView;

+ (id)__lynx_prop_config__310;

- (void)onReceiveUIOperation:(id)a0;
- (void)content:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
