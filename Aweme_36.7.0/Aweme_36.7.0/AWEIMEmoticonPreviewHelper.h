@class AWEIMEmoticonThemeModel, NSString, UICollectionView, NSDictionary, UIView, UICollectionViewCell;
@protocol AWEIMEmoticonPreviewProtocol, AWEIMEmoticonPreviewHelperDelegate;

@interface AWEIMEmoticonPreviewHelper : NSObject <AWEIMEmoticonPreviewDelegateProtocol>

@property (retain, nonatomic) UIView<AWEIMEmoticonPreviewProtocol> *preview;
@property (retain, nonatomic) UIView *previewWindowMaskView;
@property (retain, nonatomic) UICollectionViewCell *currentPreviewCell;
@property (nonatomic) long long currentThemeStyle;
@property (nonatomic) long long containerViewType;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIView *collectionViewContainer;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *emotionThemeModel;
@property (copy, nonatomic) NSDictionary *bizTrackInfos;
@property (copy, nonatomic) NSDictionary *convTrackInfos;
@property (nonatomic) unsigned long long previewScene;
@property (weak, nonatomic) id<AWEIMEmoticonPreviewHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleRotate;
- (void)p_hidePreview;
- (void)previewWindowMaskTouchDown;
- (void)hidePreview;
- (void)p_showPreviewWithThemeModel:(id)a0 model:(id)a1 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerView:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)handleLongPressGesture:(id)a0;

@end
