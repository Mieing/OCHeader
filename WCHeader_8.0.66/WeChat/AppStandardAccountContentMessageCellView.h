@class AppStandardContentSourceView, UIImageView, AppStandardAccountContentMessageViewModel, UIView, MMWebImageView, MMUILabel;

@interface AppStandardAccountContentMessageCellView : CommonMessageCellView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *descIcon;
@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UIImageView *titleSuffixImageView;
@property (retain, nonatomic) AppStandardContentSourceView *sourceView;
@property (readonly, nonatomic) AppStandardAccountContentMessageViewModel *viewModel;

- (void)prepareForReuse;
- (void)layoutContentView;
- (void)initAvatar;
- (void)initTextContent;
- (void)initSourceView;
- (void)createOrUpdateLayout;
- (id)avatarInSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
