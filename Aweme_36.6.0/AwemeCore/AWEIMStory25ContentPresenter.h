@class AWEIMMediaView;

@interface AWEIMStory25ContentPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMMediaView *mediaView;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)willUnBindView:(id)a0;
- (void)updateColorProps;
- (void)updateWithCardStyleBig:(BOOL)a0;
- (void).cxx_destruct;

@end
