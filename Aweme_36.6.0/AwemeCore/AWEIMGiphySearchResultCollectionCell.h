@class NSDictionary, NSString, UIImageView, UICollectionView, UIView, NSIndexPath, UILongPressGestureRecognizer;
@protocol AWEIMEmoticonPreviewProtocol, IESIMCollectionViewCellLoadTask, AWEIMGiphySearchResultCollectionCellDelegate;

@interface AWEIMGiphySearchResultCollectionCell : UICollectionViewCell <AWEIMEmoticonPreviewDelegateProtocol, IESIMCollectionViewCellFirstFrameProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView<AWEIMEmoticonPreviewProtocol> *preview;
@property (retain, nonatomic) UILongPressGestureRecognizer *previewLongPressGuesture;
@property (retain, nonatomic) UIView *previewWindowMaskView;
@property (retain, nonatomic) NSIndexPath *currentPreviewIndexPath;
@property (nonatomic) BOOL originPicOpt;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *trackScene;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEIMGiphySearchResultCollectionCellDelegate> delegate;
@property (weak, nonatomic) id<IESIMCollectionViewCellLoadTask> loadTask;
@property (retain, nonatomic) NSDictionary *bizTrackInfo;
@property (retain, nonatomic) NSDictionary *convTrackInfo;
@property (nonatomic) BOOL isTagResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndDisplay;
- (void)configModel:(id)a0;
- (void)p_setupGestureRecognizer;
- (void)p_hidePreview;
- (void)p_showPreviewWithThemeModel:(id)a0 model:(id)a1 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 emotionImageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(long long)a4;
- (void)previewWindowMaskTouchDown;
- (void)hidePreview;
- (void)configModel:(id)a0 placeholderColor:(id)a1;
- (void)markCompletion;
- (void)p_didLongPressEmoticonCollectionViewCell:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)willDisplay;

@end
