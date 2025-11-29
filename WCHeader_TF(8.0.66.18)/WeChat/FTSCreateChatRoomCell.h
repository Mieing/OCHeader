@class UIImageView, MMUILabel;

@interface FTSCreateChatRoomCell : MMTableViewCell {
    UIImageView *_imageView;
    MMUILabel *_intentLabel;
    MMUILabel *_descLabel;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateCellWithKeywords:(id)a0;
- (void).cxx_destruct;

@end
