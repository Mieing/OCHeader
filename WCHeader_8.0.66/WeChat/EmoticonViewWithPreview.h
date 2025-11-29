@class ThreeWayExpandImageView, UIImageView, MMEmoticonView, UILabel, CEmoticonWrap, YYAsyncImageView;
@protocol EmoticonViewWithPreviewDelegate;

@interface EmoticonViewWithPreview : MMUIView {
    id<EmoticonViewWithPreviewDelegate> m_delegate;
}

@property (retain, nonatomic) UILabel *m_previewDesLabel;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) YYAsyncImageView *m_emoticonView;
@property (retain, nonatomic) UIImageView *m_imageFocusView;
@property (retain, nonatomic) MMEmoticonView *m_emoticonPreview;
@property (retain, nonatomic) MMEmoticonView *m_emoticonShowPlayView;
@property (retain, nonatomic) CEmoticonWrap *m_wrap;
@property (retain, nonatomic) ThreeWayExpandImageView *m_emoticonPreviewBack;
@property (retain, nonatomic) UILabel *m_desLabel;
@property (nonatomic) struct CGSize { double width; double height; } m_previewSize;
@property (nonatomic) double leftEdge;
@property (nonatomic) struct CGPoint { double x; double y; } previewOffset;
@property (nonatomic) BOOL m_isPreviewing;
@property (nonatomic) BOOL m_isNeedPlay;

- (void)setDelegate:(id)a0;
- (void)setPreviewSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 EmoticonWrap:(id)a1;
- (void)initView;
- (void)layoutSubviews;
- (void)updateDesc;
- (void)updateDescFromServerWithDelay;
- (void)updateDesc:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)changeWrap:(id)a0 needShowDesc:(BOOL)a1;
- (void)changeWrap:(id)a0 needShowDesc:(BOOL)a1 shouldGetRemoteDesc:(BOOL)a2;
- (void)playGif:(BOOL)a0;
- (void)showPreview;
- (void)hidePreview;
- (void)showFocusView;
- (void)hideFocusView;
- (void)adjustPreviewFrame;
- (void).cxx_destruct;

@end
