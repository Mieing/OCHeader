@class UIImageView, UILabel, AWEIMMixPhotoAIModelInfoModel;

@interface AWEIMMixPhotoAIModelInfoView : UIView

@property (retain, nonatomic) UIImageView *leadingImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *trailingImageView;
@property (retain, nonatomic) AWEIMMixPhotoAIModelInfoModel *vm;

- (void)renderViewModel:(id)a0;
- (void)__addConstraints;
- (void)__initSubViews;
- (void).cxx_destruct;
- (id)init;
- (void)onTap;

@end
