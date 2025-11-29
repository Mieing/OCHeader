@class EmoticonStoreItem, NSString, UIImageView, MMEmoticonStoreDownloadLogic, UILabel, MMWebImageView, UIView;

@interface MMStoreEmotionHotCell : UICollectionViewCell <MMEmoticonStoreDownloadLogicDelegate> {
    int _type;
    int _scene;
}

@property (retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) MMWebImageView *emotionButton;
@property (retain, nonatomic) UILabel *emotionTitleLabel;
@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) MMWebImageView *tagImageView;
@property (retain, nonatomic) UIImageView *tagImageViewNew;
@property (retain, nonatomic) EmoticonStoreItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupButtonImageURL:(id)a0;
- (void)setupLabelWithTitle:(id)a0;
- (void)setupEmotionStoreItem:(id)a0 Entrance:(unsigned int)a1 andType:(long long)a2;
- (void)hideFreeLabel;
- (void)setPersonalCellStyle;
- (void)setCellBackgroundColor:(id)a0;
- (void)setScene:(int)a0 andType:(int)a1;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setupViews;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)loadTagImageView;
- (void)setupDownloadView;
- (void)setupButton;
- (void)setupLabel;
- (void)showFreeLabel;
- (BOOL)isEmoticonDownloaded;
- (void)onDownloadFinished;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (void).cxx_destruct;

@end
