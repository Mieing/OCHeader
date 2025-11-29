@class BDASifConfiguration, UIView;
@protocol BDXWebViewProtocol;

@interface BDASifContext : NSObject

@property (retain, nonatomic) BDASifConfiguration *config;
@property (retain, nonatomic) UIView<BDXWebViewProtocol> *bdx_webview;
@property (nonatomic) double proportion;

- (void).cxx_destruct;

@end
