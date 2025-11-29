@class NSString, UIViewController;
@protocol AWETransformerNativeContainerDelegate;

@interface AWETransformerNativeElement : AWETransformerSingleElement

@property (retain, nonatomic) UIViewController *nativeVC;
@property (weak, nonatomic) id<AWETransformerNativeContainerDelegate> nativeContainerDelegate;
@property (copy, nonatomic) NSString *containerType;

+ (id)elementType;

- (double)originWidth;
- (double)originHeight;
- (void)loadViewWithCache:(id)a0 delegate:(id)a1;
- (void)__loadNativeView;
- (void).cxx_destruct;
- (void)loadView;

@end
