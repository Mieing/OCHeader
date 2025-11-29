@class NSString, UILabel, MMWebImageView, UIView;

@interface MJStickerPickerCell : UICollectionViewCell <MJMaterialLoadingStatusView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MMWebImageView *previewImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) BOOL bSelect;

- (id)mj_loadingContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutWithItem:(id)a0;
- (void)clearContent;
- (void)updateSelectionStyle:(BOOL)a0;
- (void).cxx_destruct;

@end
