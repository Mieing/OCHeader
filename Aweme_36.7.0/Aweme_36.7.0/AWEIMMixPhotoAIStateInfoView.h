@class UIImageView, UILabel, AWEIMMixPhotoAITaskStateInfoModel;

@interface AWEIMMixPhotoAIStateInfoView : UIView

@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIImageView *leadingImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEIMMixPhotoAITaskStateInfoModel *vm;

- (void)renderViewModel:(id)a0;
- (void)__addConstraints;
- (void)__initSubViews;
- (void).cxx_destruct;
- (id)init;

@end
