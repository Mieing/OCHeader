@class NSMutableDictionary, NSString, YataPopupStack, UIView;
@protocol YataInstanceInnerInterface;

@interface YataPopupLayer : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *popupContainerView;
@property (retain, nonatomic) NSMutableDictionary *popupViewMap;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (nonatomic) BOOL maskClosable;
@property (nonatomic) BOOL isPushOrPopAnimation;
@property (weak, nonatomic) YataPopupStack *popupStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapMask;
- (void)maskClosableConfig:(id)a0;
- (void)popupViewConfigFrameWithPopupContainer:(id)a0 popupView:(id)a1 popupConfig:(id)a2 popupCustom:(id)a3;
- (void)addRadius:(id)a0 toPopupView:(id)a1;
- (id)coverMaskColor;
- (void)setRadiusTopLeft:(id)a0 topRight:(id)a1 bottomLeft:(id)a2 bottomRight:(id)a3 inPopupView:(id)a4;
- (id)initWithYataInstance:(id)a0 popupStack:(id)a1;
- (void)addPopupViewWithNode:(id)a0 completion:(id /* block */)a1;
- (void)removePopupViewWithKey:(id)a0 completion:(id /* block */)a1;
- (void)updateWithPopupArray:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
