@class NSMutableArray, UIStackView;

@interface IESLiveChatChannelToolbar : UIView

@property (retain, nonatomic) UIStackView *toolbar;
@property (retain, nonatomic) NSMutableArray *packViews;
@property (nonatomic) BOOL isActiving;

- (id)renderWithItem:(id)a0;
- (void)unactive;
- (void)active;
- (void).cxx_destruct;
- (id)init;
- (void)reloadWithItems:(id)a0;
- (void)setupUI;

@end
