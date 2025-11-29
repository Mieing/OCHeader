@class HTSLiveMessageListNode, IESLiveMessageListCommonCell;

@interface IESLiveMessageListCommonCellPinnedView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveMessageListCommonCell *contentView;
@property (retain, nonatomic) HTSLiveMessageListNode *node;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)refreshWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)viewType;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
