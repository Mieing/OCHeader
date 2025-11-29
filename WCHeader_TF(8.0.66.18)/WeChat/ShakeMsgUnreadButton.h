@class MMWebImageView;

@interface ShakeMsgUnreadButton : UIButton <ShakeMgrExt> {
    MMWebImageView *oIconImageView;
}

- (id)init;
- (void)initView;
- (void)updateSubViews;
- (void)onShakeMsgUnreadCountChanged;
- (void).cxx_destruct;

@end
