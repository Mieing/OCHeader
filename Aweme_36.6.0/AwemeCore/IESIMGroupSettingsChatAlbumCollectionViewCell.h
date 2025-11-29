@class UIView, NSString, IESIMGroupSettingsChatAlbumItemViewModel, UILabel, AWEIMRefreshImageView, IESIMLivePhotoTagView;
@protocol IESIMGradientViewProtocol;

@interface IESIMGroupSettingsChatAlbumCollectionViewCell : UICollectionViewCell <IESIMMediaCoverDisplayProtocol, AWEIMOpenFeedDetailLoadingAnimation>

@property (retain, nonatomic) IESIMGroupSettingsChatAlbumItemViewModel *itemViewModel;
@property (retain, nonatomic) AWEIMRefreshImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) IESIMLivePhotoTagView *livePhotoTag;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *bottomMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)mediaImageView;
- (id)mediaMessage;
- (id)awemeID;
- (void)endAnimationForLoadingAwemeModel;
- (void)startAnimationForLoadingAwemeModel;
- (void)p_createComponent;
- (void)p_layoutComponent;
- (void)p_updateAccessibilityLabel:(id)a0;
- (void)renderWithItemViewModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })mediaSize;

@end
