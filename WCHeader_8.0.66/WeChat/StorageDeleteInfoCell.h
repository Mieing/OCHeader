@class NSString, UIImageView, UILabel, MMUIButton, UIView;
@protocol StorageDeleteInfoCellDelegate;

@interface StorageDeleteInfoCell : UITableViewCell {
    struct shared_ptr<ChatLogSessionItem> { struct ChatLogSessionItem *__ptr_; struct __shared_weak_count *__cntrl_; } m_curSessionItem;
}

@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *resourceIcon;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UILabel *msgCountLabel;
@property (retain, nonatomic) UIView *bottomSeperateLine;
@property (weak, nonatomic) id<StorageDeleteInfoCellDelegate> delegate;

+ (double)cellHeight;

- (const void *)sessionItem;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateCellWithSessionItem:(const void *)a0 sizeString:(id)a1 selected:(BOOL)a2;
- (void)onClickResourceImage;
- (void)onClickShowDetail;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
