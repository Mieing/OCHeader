@class UIImageView, AWEAwemeModel, UIView;
@protocol AWEFeedPauseModalStyleManagerProtocol;

@interface AWEFeedPauseModalCloseComponent : AWEFeedPauseModalBaseComponent {
    id<AWEFeedPauseModalStyleManagerProtocol> _componentContainer;
}

@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIImageView *markView;
@property (retain, nonatomic) AWEAwemeModel *model;

- (id)componentContainer;
- (void)setComponentContainer:(id)a0;
- (void)tapCloseComponent;
- (id)updateViewWithModel:(id)a0;
- (void).cxx_destruct;

@end
