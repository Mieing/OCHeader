@class IESLiveNativeAppShelfCellCommonEdgeView, ShelfCardInfo, IESLiveNativeAppShelfCellAnchorTitleLabel, UIView, IESLiveNativeAppShelfCellAnchorCouponInfoView, UIImageView, UIButton, NSString, IESLiveNativeAppShelfCellAnchorCoverImageView, UILabel;
@protocol IESLiveNativeAppShelfCardManageCellDelegate;

@interface IESLiveNativeAppShelfCardManageCell : UITableViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) ShelfCardInfo *cardInfo;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL showSellingPoint;
@property (retain, nonatomic) UIButton *cardEditButton;
@property (retain, nonatomic) UILabel *editLabel;
@property (retain, nonatomic) UIImageView *editImageView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellCommonEdgeView *edgeView;
@property (retain, nonatomic) UIButton *selectBtn;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAnchorCoverImageView *coverImageView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAnchorTitleLabel *titleLabel;
@property (retain, nonatomic) UIView *reviewContent;
@property (retain, nonatomic) UIButton *reviewingButton;
@property (retain, nonatomic) UIButton *reviewRejectButton;
@property (retain, nonatomic) IESLiveNativeAppShelfCellAnchorCouponInfoView *couponInfoView;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIImageView *dragButton;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (nonatomic) BOOL useNewUE;
@property (weak, nonatomic) id<IESLiveNativeAppShelfCardManageCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContextCallOnce;
- (void)hideMoreButton;
- (void)moreButtonDidClick;
- (void)selectBtnDidClick;
- (void)updateSellingPoint:(id)a0;
- (void)updateWithCardInfo:(id)a0 index:(unsigned long long)a1;
- (void)reviewRejectButtonDidClick;
- (void)imageOrTitleDidClick:(id)a0;
- (void)cardEditButtonDidClick:(id)a0;
- (void)updateUEStyle:(BOOL)a0 isEditingMode:(BOOL)a1;
- (void)showSellingPointGuide;
- (void)setIsCardSelected:(BOOL)a0;
- (void)reviewRejectViewDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)setUpUI;

@end
