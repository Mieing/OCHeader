@class UIImageView, MMUILabel;

@interface FTSMsgSearchTalkerCell : MMTableViewCell {
    UIImageView *_imageView;
    MMUILabel *_intentLabel;
    MMUILabel *_descLabel;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void)initView;
- (void)updateTalker:(id)a0 andQuery:(id)a1;
- (void).cxx_destruct;

@end
