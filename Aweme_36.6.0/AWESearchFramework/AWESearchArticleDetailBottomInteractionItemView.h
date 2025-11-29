@class AWESearchArticleDetailPageContext, UIImageView, UILabel, NSMutableArray;

@interface AWESearchArticleDetailBottomInteractionItemView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;
@property (retain, nonatomic) NSMutableArray *bindings;
@property (nonatomic) BOOL dataBinded;

- (id)formatedNumber:(long long)a0;
- (void)onAwemeDiggNotification:(id)a0;
- (void)setupBinding;
- (void)bindLike;
- (void)bindComment;
- (void)bindCollect;
- (void)bindShare;
- (void)bindPageContext:(id)a0;
- (void)handleShareSuccessLetShareCountPlusNotification:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (void)setupUI;

@end
