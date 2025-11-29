@class AWEIMUIButtonPresenter, AWEIMFansTagItemModel;

@interface AWEIMMessageSubscribeTagComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMUIButtonPresenter *buttonPresenter;
@property (retain, nonatomic) AWEIMFansTagItemModel *tagItemModel;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_updateProps:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)p_addKVO:(id)a0;
- (void).cxx_destruct;

@end
