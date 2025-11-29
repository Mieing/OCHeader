@class UIButton, UILabel, NSString;
@protocol AWESearchPhotoSearchResultsTopViewDelegate;

@interface AWESearchPhotoSearchResultsTopView : UIView <AWESearchInlayScrollPanelTopViewProtocol, AWESearchPhotoTopResultProtocol>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long titleAlignment;
@property (weak, nonatomic) id<AWESearchPhotoSearchResultsTopViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (nonatomic) double customHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)feedDidScroll:(id)a0;
- (double)inlayScrollPanelTopViewHeight;
- (void)updateOriginProductCard:(id)a0 parameters:(id)a1;
- (BOOL)alreadySetupProductCardModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleAlignment:(long long)a1 buttonStyle:(long long)a2;
- (void)setTitile:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)closeButtonAction;

@end
