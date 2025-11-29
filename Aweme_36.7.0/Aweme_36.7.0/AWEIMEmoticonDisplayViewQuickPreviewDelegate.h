@class UIView, NSString, AWEIMEmoticonPreviewV2, AWEIMEmoticonModel, AWEIMEmoticonDisplayViewQuickPreviewModel, NSDictionary, AWEIMEmoticonThemeModel, NSIndexPath;
@protocol AWEIMEmoticonDisplayViewControllerConfigProtocol, AWEIMEmoticonDisplayPreviewProtocol;

@interface AWEIMEmoticonDisplayViewQuickPreviewDelegate : NSObject <AWEIMEmoticonPreviewDelegateProtocol, AWEIMSimilarEmoticonDisplayViewProtocol>

@property (retain, nonatomic) NSIndexPath *currentPreviewIndexPath;
@property (retain, nonatomic) UIView *previewWindowMaskView;
@property (retain, nonatomic) AWEIMEmoticonPreviewV2 *preview;
@property (retain, nonatomic) AWEIMEmoticonModel *emoticonModel;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cellFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewFrame;
@property (nonatomic) long long position;
@property (retain, nonatomic) AWEIMEmoticonDisplayViewQuickPreviewModel *preViewModel;
@property (weak, nonatomic) id<AWEIMEmoticonDisplayPreviewProtocol> emoticonPreviewDelegate;
@property (weak, nonatomic) id<AWEIMEmoticonDisplayViewControllerConfigProtocol> context;
@property (copy, nonatomic) NSDictionary *trackInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_hidePreview;
- (id)convertSelectPreviewEmoticonWithIndexPath:(id)a0;
- (void)clearSelectCache;
- (void)p_showPreviewWithThemeModel:(id)a0 model:(id)a1 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 emotionImageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(long long)a4;
- (long long)colsPerRow;
- (void)previewWindowMaskTouchDown;
- (void)hidePreview;
- (void)didTapEmoticonPreviewSendButton;
- (void)didTapAddToCustomButton;
- (id)didLongPressEmoticonDisplayView:(id)a0;
- (void)didSelectPreviewEmoticonWithIndexPath:(id)a0;
- (void)dismissQuickPanelView;
- (id)initWithPreviewModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
