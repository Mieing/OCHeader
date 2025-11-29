@class AWEIMUIButtonPresenter;

@interface AWEIMMessageActiveTagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMUIButtonPresenter *buttonPresenter;
@property (nonatomic) BOOL activeTagDisplayStatus;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_updateProps:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)p_addKVO:(id)a0;
- (void)p_clickActiveTag:(id)a0;
- (void).cxx_destruct;

@end
