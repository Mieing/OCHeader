@class NSDictionary, UIView, AWEUILoadingView, UIViewController;
@protocol AWESearchPhotoSearchResultViewControllerProtocol;

@interface AWEEcomSearchPhotoSearchContentLynxView : LynxUI

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIViewController<AWESearchPhotoSearchResultViewControllerProtocol> *searchResultVC;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *paramsDict;
@property (nonatomic) long long selectedIndex;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__601;
+ (id)__lynx_prop_config__792;

- (void)dismissLoadingView;
- (void)updateParams:(id)a0;
- (void)setParamsDict:(id)a0 requestReset:(BOOL)a1;
- (void)setSelectedIndex:(long long)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showLoadingView;
- (id)createView;

@end
