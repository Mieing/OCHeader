@class UIImageView, AWEIMConversationContext, AWEIMEmoticonReplyListSectionModel, YYLabel;

@interface AWEIMEmoticonRelyListPropertyCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *emoticonView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) AWEIMEmoticonReplyListSectionModel *model;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;

- (void)renderWithModel:(id)a0;
- (void)p_bindToVM;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
