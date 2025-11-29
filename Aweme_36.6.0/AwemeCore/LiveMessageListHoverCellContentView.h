@class HTSLiveMessageListNode, UIImageView, UIView, UILabel;

@interface LiveMessageListHoverCellContentView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) HTSLiveMessageListNode *node;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *hoverIcon;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)refreshWith:(id)a0;
- (void)refreshIconWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
