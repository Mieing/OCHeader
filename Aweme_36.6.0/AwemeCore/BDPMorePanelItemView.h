@class UIImageView, UILabel, BDPMorePanelItem, UIView;

@interface BDPMorePanelItemView : UIView {
    UIView *_imageContainer;
}

@property (nonatomic) BOOL abTestOn;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDPMorePanelItem *item;

- (void)abTestOnForShareItemMenu;
- (void)setupReddotViewIfNeed;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setupTitleLabel;
- (void)updateTitle;
- (void)onTap:(id)a0;
- (void)setupImageView;

@end
