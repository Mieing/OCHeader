@class NSArray;

@interface WeChat.WSK1kLiteAppTabContainerView : WSContainerBaseView {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ liteAppDidLoad;
    void /* unknown type, empty encoding */ categoryId;
    void /* unknown type, empty encoding */ urlQueryDict;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ liteAppView;
@property (nonatomic, readonly) NSArray *bizScrollArea;

- (id)initWithConfig:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)initViewIfNeed;
- (void)onQuitWSWebView:(BOOL)a0;
- (void)onSwitchToOtherView:(id)a0;
- (void)onSwitchToThisView:(id)a0;
- (void)exposed;
- (id)getCategoryId;
- (void)onContainerAppear;
- (void)onContainerDidDisappear;
- (id)init;
- (id)initConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
