@class UIButton, NSString;
@protocol AWEIMImageWaterFallItemProtocol, AWEIMMixPhotoButtonWaterFallCellDelegate;

@interface AWEIMMixPhotoButtonWaterFallCell : AWEIMImageWaterFallCell <AWEIMMixPhotoButtonWaterFallCellProtocol>

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) id<AWEIMImageWaterFallItemProtocol> item;
@property (weak, nonatomic) id<AWEIMMixPhotoButtonWaterFallCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithItem:(id)a0;
- (void)setupButtonUI;
- (void)setupButtonLayout;
- (void)didButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
