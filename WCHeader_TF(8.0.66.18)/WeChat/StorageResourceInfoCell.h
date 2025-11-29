@class ResourceCountView, UIImageView, UILabel, MMUIButton, UIView;
@protocol StorageResourceInfoCellDelegate;

@interface StorageResourceInfoCell : UITableViewCell {
    struct shared_ptr<ChatLogSessionItem> { struct ChatLogSessionItem *__ptr_; struct __shared_weak_count *__cntrl_; } m_curSessionItem;
}

@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *resourceIcon;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) ResourceCountView *resCountView;
@property (retain, nonatomic) UIView *bottomSeperateLine;
@property (weak, nonatomic) id<StorageResourceInfoCellDelegate> delegate;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateWithSessionItem:(const void *)a0 selected:(BOOL)a1 selectType:(unsigned long long)a2;
- (const void *)sessionItem;
- (void)onClickDetailButton;
- (void)onClickArrowButton;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
