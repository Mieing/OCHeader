@class UIViewController;
@protocol IESECTabViewElementProtocol;

@interface IESECSlidingViewElementWrapper : NSObject {
    UIViewController<IESECTabViewElementProtocol> *_mObject;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) UIViewController<IESECTabViewElementProtocol> *wrapperObject;
@property (nonatomic, getter=isAppeared) BOOL balancedCallAppearanceTransitionMethod;
@property (nonatomic) BOOL hasLoaded;

+ (id)tabViewElementWrapperWithObject:(id)a0;

- (id)initWithWrapperObject:(id)a0;
- (void)endAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)beginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;

@end
