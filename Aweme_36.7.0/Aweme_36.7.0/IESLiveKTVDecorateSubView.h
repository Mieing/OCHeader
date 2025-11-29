@class UIView, NSString, UICollectionViewFlowLayout, IESLiveKTVDecorateSubContext, UIImageView, UIButton, IESLiveButton, UICollectionView, IGListAdapter, UILabel;
@protocol IESLiveKTVDecorateCellDelegate;

@interface IESLiveKTVDecorateSubView : UICollectionViewCell <UICollectionViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *foldGradientView;
@property (retain, nonatomic) UIButton *infoButton;
@property (retain, nonatomic) UIImageView *shade;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveButton *foldButton;
@property (copy, nonatomic) id /* block */ foldButtonAction;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (weak, nonatomic) id<IESLiveKTVDecorateCellDelegate> delegate;
@property (weak, nonatomic) IESLiveKTVDecorateSubContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateWithFold:(BOOL)a0;
- (void)tr_showFoldButton;
- (void)p_didTapFoldButton:(BOOL)a0;
- (void)tr_clickFoldButton:(BOOL)a0;
- (void).cxx_destruct;
- (void)didSelectItem:(long long)a0;
- (void)updateWithContext:(id)a0;

@end
