@class AWEECOMIMFootDescActionUIModel, AWEECOMIMFootDescActionButtonsView, NSString, AWEECOMIMFooterDescView, AWEECOMIMFootDescFoldButton, AWEECOMIMPageTrackUtil;
@protocol AWEECOMIMFootDescActionViewDelegate;

@interface AWEECOMIMFootDescActionView : UIView <AWEECOMIMFooterDescViewDelegate>

@property (retain, nonatomic) AWEECOMIMFootDescActionUIModel *model;
@property (retain, nonatomic) AWEECOMIMFooterDescView *footDescInfoView;
@property (retain, nonatomic) AWEECOMIMFootDescActionButtonsView *actionButtonsView;
@property (retain, nonatomic) AWEECOMIMFootDescFoldButton *foldButton;
@property (weak, nonatomic) id<AWEECOMIMFootDescActionViewDelegate> delegate;
@property (weak, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (copy, nonatomic) id /* block */ didClickFoldButtonBlock;
@property (nonatomic) long long alignment;
@property (readonly, copy, nonatomic) NSString *locationSubType;
@property (readonly, nonatomic) BOOL withTransHuman;
@property (readonly, copy, nonatomic) NSString *tipsTypeString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithModel:(id)a0;

- (BOOL)withTransHuman;
- (id)tipsTypeString;
- (id)locationSubType;
- (void)didClickFoldButton;
- (void)modifyUserConfig:(int)a0 buttonName:(id)a1;
- (void)handleDidClickActionItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
