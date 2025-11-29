@class NSString, WKWebView, NSNumber, NSMutableArray;
@protocol SCCFilterProtocol;

@interface BDSCCFilter : NSObject <BDWebRequestFilter>

@property (retain, nonatomic) NSMutableArray *whiteListArray;
@property (retain, nonatomic) NSNumber *switchFilter;
@property (retain) id<SCCFilterProtocol> handleReport;
@property (weak) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bdw_willBlockRequest:(id)a0;
- (void).cxx_destruct;

@end
