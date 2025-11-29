@class MMUIActivityIndicatorView, UILabel, MMUIButton, UIButton;
@protocol StorageFootPanelViewDelegate;

@interface StorageFootPanelView : UIView

@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) UIButton *cancelSelectButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) MMUIButton *hardlinkInfo;
@property (nonatomic) unsigned long long panelStyle;
@property (weak, nonatomic) id<StorageFootPanelViewDelegate> delegate;
@property (nonatomic) BOOL bShowHardLinkTip;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withStyle:(unsigned long long)a1;
- (void)updateView;
- (void)onClickShowInfo;
- (void)onFootPanelSelectButtonClick;
- (void)onFootPanelSelectAllButtonClick;
- (void)onFootPanelDeleteButtonClick;
- (void).cxx_destruct;

@end
