@class UIButton, NSArray, CAKAlbumCollectionItemModel, UIImageView, UIView, DUXBaseLabel;
@protocol CAKAIMemoriesSearchListHeaderFloatViewDelegate;

@interface CAKAIMemoriesSearchListHeaderFloatView : UIView

@property (retain, nonatomic) CAKAlbumCollectionItemModel *collectionItemModel;
@property (retain, nonatomic) UIView *normalContentView;
@property (retain, nonatomic) UIView *imageListContainer;
@property (copy, nonatomic) NSArray *imageViewArray;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) UIView *loadingContentView;
@property (retain, nonatomic) UIImageView *loadingIcon;
@property (retain, nonatomic) DUXBaseLabel *loadingLabel;
@property (weak, nonatomic) id<CAKAIMemoriesSearchListHeaderFloatViewDelegate> delegate;

- (void)setupLoadingView;
- (BOOL)enableAIMemoriesOneClipFilm;
- (void)updateSubmitBtn:(id)a0;
- (void)setupImageViewArrayWithContainer:(id)a0;
- (void)submitButtonAction:(id)a0;
- (void)updateCollectionItemModel:(id)a0;
- (void)updateSubmitBtnStatus;
- (void)showLoadingStateWithKeyword:(id)a0;
- (void)hideLoadingState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
