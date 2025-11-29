@class AWEIMMixPhotoInitiatePageSheetViewModel, UILabel, UIView, UIButton;
@protocol AWEIMMixPhotoInitiatePageSheetActionViewDelegate;

@interface AWEIMMixPhotoInitiatePageSheetActionView : UIView

@property (retain, nonatomic) AWEIMMixPhotoInitiatePageSheetViewModel *viewModel;
@property (retain, nonatomic) UIButton *negativeButton;
@property (retain, nonatomic) UIButton *positiveButton;
@property (retain, nonatomic) UILabel *describeLabel;
@property (retain, nonatomic) UIView *tipImageView;
@property (weak, nonatomic) id<AWEIMMixPhotoInitiatePageSheetActionViewDelegate> delegate;

- (void)createComponents;
- (void)configComponents;
- (void)p_didClickNegativeButton:(id)a0;
- (void)p_didClickPositiveButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)layoutComponents;

@end
