@class WKWebViewConfiguration;

@interface SECWebViewBuilderContext : NSObject

@property (retain, nonatomic) WKWebViewConfiguration *configuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (void).cxx_destruct;

@end
