@class IESIMBulletContainerContext;

@interface AWEIMMessageBulletPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) IESIMBulletContainerContext *bulletContext;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)updateBulletData;
- (void).cxx_destruct;

@end
