@class NSString, UIView;

@interface AWELongPressGuideManager : NSObject <UIGestureRecognizerDelegate, AWELongPressGuideManagerProtocol>

@property (retain, nonatomic) UIView *guideView;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showLongPressGuideIfNeededWithAweme:(id)a0 finishBlock:(id /* block */)a1;
- (void)releaseGuideView;
- (void)longPressDetected:(id)a0;
- (void)panDetected:(id)a0;
- (void)tapDetected:(id)a0;
- (void).cxx_destruct;

@end
