@class MMListenCategoryItem, UIImageView, NSString, UIView, TingSharePlayButton, MMUILabel;

@interface TingSharedAudioView : UIControl <MMImageLoaderObserver>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *highlightedMaskView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) TingSharePlayButton *playButton;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (nonatomic) BOOL ignoreTouchesExceptPlayButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cardHeight;
+ (struct CGSize { double x0; double x1; })cardSizeForChat;
+ (struct CGSize { double x0; double x1; })cardSizeForMoment;

- (int)fontModule;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)updateDisplayWith:(id)a0;
- (void)updateTextAndLayoutWith:(id)a0;
- (void)reloadTingItemCover;
- (void)updateThumbnail:(id)a0;
- (void)updateTitle:(id)a0 subtitle:(id)a1 isMusic:(BOOL)a2;
- (void)_updateTitle:(id)a0 subtitle:(id)a1 isMusic:(BOOL)a2;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void).cxx_destruct;

@end
