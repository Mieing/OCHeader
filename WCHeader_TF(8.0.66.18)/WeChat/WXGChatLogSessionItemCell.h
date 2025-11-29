@class UIImageView, UILabel;

@interface WXGChatLogSessionItemCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *selectedImage;
@property (retain, nonatomic) UIImageView *resourceIcon;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (nonatomic) struct shared_ptr<ChatLogSessionItem> { struct ChatLogSessionItem *__ptr_; struct __shared_weak_count *__cntrl_; } sessionItem;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateSessionItem:(struct shared_ptr<ChatLogSessionItem> { struct ChatLogSessionItem *x0; struct __shared_weak_count *x1; })a0 selected:(BOOL)a1 textOnly:(BOOL)a2 textType:(unsigned long long)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
