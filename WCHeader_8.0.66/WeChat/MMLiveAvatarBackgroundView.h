@class MMWebImageView, WCFinderHeadImageView, MMFinderLiveTaskId, WCFinderDataItem, MMFinderLiveTask, UIView;

@interface MMLiveAvatarBackgroundView : UIView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) UIView *maskContainerView;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UIView *customContentView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithTask:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFinderDataItem:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)refreshImage;
- (id)tryGetAnchorDefaultCoverImageUrlInKTVMode:(id)a0;
- (void)addMaskBlurWithColor:(id)a0;
- (void)addCustomContentView:(id)a0;
- (void)initializeImageViews;
- (void).cxx_destruct;

@end
