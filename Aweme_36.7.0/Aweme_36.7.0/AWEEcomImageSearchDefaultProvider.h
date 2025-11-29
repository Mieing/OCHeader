@class NSString, UIScrollView, UIView, UIViewController;
@protocol AWESearchPhotoSearchResultViewControllerProtocol;

@interface AWEEcomImageSearchDefaultProvider : NSObject <IESECImageSearchProviderProtocol>

@property (retain, nonatomic) UIViewController<AWESearchPhotoSearchResultViewControllerProtocol> *resultViewController;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIScrollView *contentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createImageSearchProvider;

- (void)invokeImageSearchWithParams:(id)a0;
- (void)backToScrollViewTop;
- (void)imageSearchViewFirstAppearWithParams:(id)a0;
- (id)imageSearchContentViewWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
