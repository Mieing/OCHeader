@class UILabel, UIButton, UIImageView;

@interface SessionItemCell : MMTableViewCell {
    UIImageView *_selectedImage;
    UIImageView *_resourceIcon;
    UILabel *_sourceLabel;
}

@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (readonly, nonatomic) struct shared_ptr<ChatLogSessionItem> { struct ChatLogSessionItem *__ptr_; struct __shared_weak_count *__cntrl_; } sessionItem;

- (void)initView;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateSessionItem:(const void *)a0 selected:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
