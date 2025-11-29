@class UIImageView, MMWindowViewController, MMUIWindow;

@interface MMWindowMgrObject : NSObject {
    MMWindowViewController *m_windowVC;
    MMUIWindow *m_Window;
}

@property (retain, nonatomic) UIImageView *blurBgImageView;
@property (nonatomic) int animationType;
@property (nonatomic) BOOL isChangeStatusBarStyle;
@property (nonatomic) BOOL isRequestKeyWindow;
@property (nonatomic) long long statusBarStyle;
@property (nonatomic) long long lastStatusBarStyle;
@property (nonatomic) int transitionOptions;
@property (nonatomic) BOOL isNeedNavCtrl;
@property (readonly, nonatomic) BOOL isMakeUnVisible;
@property (readonly, nonatomic) BOOL isMakeUnKey;

- (void)setMMWindowVC:(id)a0;
- (id)getMMWindowVC;
- (void)setMMWindow:(id)a0;
- (id)getMMWindow;
- (BOOL)isObjectEqual:(id)a0;
- (BOOL)isGreaterThan:(id)a0;
- (void)makeUnKeyAndUnVisible;
- (void)recoverKeyAndVisibleIfNeeded;
- (id)description;
- (void).cxx_destruct;

@end
