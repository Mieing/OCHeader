@class UIButton, AWETeenPlayInteractionContext, AWEAwemeModel;

@interface AWETeenPlayInteractionSubscribeButton : UIView

@property (retain, nonatomic) UIButton *subscribeButton;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWETeenPlayInteractionContext *context;
@property (nonatomic) BOOL isSubscribing;

- (id)initWithModel:(id)a0 context:(id)a1;
- (void)p_subscribe:(BOOL)a0;
- (id)getTitleAction:(id)a0;
- (void)updateSubscribeStatus:(long long)a0;
- (void)p_clickSubscribeButton:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
