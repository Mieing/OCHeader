@class WSContainerViewReporter, NSString, NSNumber, UIViewController;

@interface WSContainerBaseView : UIView <WSContainerView>

@property (nonatomic) BOOL hasExposed;
@property (retain, nonatomic) NSNumber *categoryId;
@property (nonatomic) unsigned long long bizType;
@property (weak, nonatomic) UIViewController *tabViewController;
@property (retain, nonatomic) WSContainerViewReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initConfig:(id)a0;
- (void)initViewIfNeed;
- (void)exposed;
- (BOOL)shouldInitViewWhenViewDidAppear;
- (unsigned long long)getBizType;
- (void)onEnterWSWebView:(BOOL)a0;
- (void)onDidEnterWSWebView:(BOOL)a0;
- (void)onQuitWSWebView:(BOOL)a0;
- (void)onSwitchToThisView:(id)a0;
- (void)onSwitchToOtherView:(id)a0;
- (id)getCategoryId;
- (void).cxx_destruct;

@end
