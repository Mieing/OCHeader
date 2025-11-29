@class NSError, NSString, NSDictionary;

@interface AWEAdPromptWebViewController : AWEAdSpecialWebViewController <AWEAdPromptView>

@property (retain, nonatomic) NSError *loadError;
@property (copy, nonatomic) NSString *requestURL;
@property (nonatomic) double loadDuration;
@property (copy, nonatomic) id /* block */ didFailToLoadHandler;
@property (copy, nonatomic) id /* block */ didFinishLoadHandler;
@property (copy, nonatomic) NSDictionary *liveRoomInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needChangeBar;
- (void)invokeJSWithEvent:(id)a0 params:(id)a1;
- (void)updateWebViewConfig;
- (void)notifyDialogPopUpEvent;
- (void)notifyFeedCardStartUnfoldEvent;
- (void)notifyOnLeaveConvertPage:(id)a0;
- (void)setupScrollViewContentOffsetZeroIfNeed;
- (void)setupClearBackgroundColor;
- (void)notifyFEWhenScreenOrientationChange:(id)a0;
- (void)cancelLoading;
- (void).cxx_destruct;
- (id)contentView;
- (void)reload;
- (void)reset;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;

@end
