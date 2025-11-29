@class AWEAIOriginalPageContext, UIImageView, UILabel, NSMutableArray;
@protocol AWEAIOriginalContainerViewControllerProtocol;

@interface AWEAIOriginalBottomItemView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSMutableArray *bindings;
@property (weak, nonatomic) AWEAIOriginalPageContext *pageContext;
@property (weak, nonatomic) id<AWEAIOriginalContainerViewControllerProtocol> containerVC;

- (id)formatedNumber:(long long)a0;
- (void)bindPageContext:(id)a0 containerVC:(id)a1;
- (void)bindLike;
- (void)bindComment;
- (void)bindCollect;
- (void)bindShare;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (void)setupUI;

@end
