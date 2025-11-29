@class NSString, MMEmoticonStoreDownloadLogic, UIView, EmoticonStoreItem, MMWebImageView;

@interface MMStoreEmotionBaseAllCell : MMStoreEmotionStoreListCell <MMEmoticonStoreDownloadLogicDelegate>

@property (retain, nonatomic) UIView *lastCellLineView;
@property (nonatomic) int type;
@property (nonatomic) int scene;
@property (retain, nonatomic) EmoticonStoreItem *storeItem;
@property (retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic;
@property (nonatomic) unsigned long long lineStyle;
@property (nonatomic) double horizontalInset;
@property (retain, nonatomic) MMWebImageView *linkIconView;
@property (nonatomic) BOOL layoutStaticBtnWidth;
@property (copy, nonatomic) id /* block */ downloadViewSDKReportSetter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)downloadLogicConfig;
- (void)initDownloadView;
- (void)updateStoreItem:(id)a0;
- (void)updateLinkInfoLayout;
- (void)updateWithLinkInfo:(id)a0;
- (void)setScene:(int)a0 andType:(int)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)appendBottomLineForlast;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)layoutBaseViewContainer;
- (void)layoutRightViewContainer;
- (void)updateSpilitLineStyle:(void *)a0;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)a0;
- (void)onDownloadFinished;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (id)downloadLogicReportInfo;
- (id)getNameTextWithArrow:(id)a0;
- (id)getNameTextWithArrow:(id)a0 foregroundColor:(id)a1;
- (void).cxx_destruct;

@end
