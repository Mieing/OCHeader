@class NSMutableDictionary, UIView;

@interface IESECRelationStateSwitcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *stateViewsManager;
@property (weak, nonatomic) UIView *rootView;

- (void)registerViews:(id)a0 forState:(unsigned long long)a1;
- (void)switchToState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
