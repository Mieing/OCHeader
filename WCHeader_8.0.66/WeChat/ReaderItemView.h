@class UIView, MMWebImageView, NSString, UIImage, CALayer, UIImageView, BTRichTextTagView, NSMutableArray, RichTextView, CAGradientLayer;
@protocol ReaderItemViewDelegate;

@interface ReaderItemView : UIButton <RichTextLayoutDelegate, MMWebImageViewDelegate, ReaderReporterExt> {
    unsigned int itemShowType;
    BOOL m_isSelected;
    BTRichTextTagView *m_titleView;
    UIView *m_highlightMaskView;
    MMWebImageView *m_coverImage;
    RichTextView *m_digestView;
    CAGradientLayer *m_gradientLayer;
    CALayer *m_coverMaskLayer;
}

@property (nonatomic) int type;
@property (nonatomic) unsigned int m_uiReaderIndex;
@property (nonatomic) BOOL m_bHasBottomBtn;
@property (retain, nonatomic) NSString *m_nsCover;
@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsDigest;
@property (nonatomic) unsigned int m_uiDelFlag;
@property (nonatomic) unsigned int m_itemShowType;
@property (retain, nonatomic) NSString *m_nsContentUrl;
@property (nonatomic) struct CGSize { double width; double height; } m_titleSize;
@property (nonatomic) struct CGSize { double width; double height; } m_digestSize;
@property (nonatomic) double m_labelMaxWidth;
@property (nonatomic) unsigned long long m_limitLineNumber;
@property (retain, nonatomic) NSMutableArray *m_titleStyles;
@property (retain, nonatomic) NSMutableArray *m_digestStyles;
@property (nonatomic) unsigned long long m_imageCount;
@property (retain, nonatomic) UIImageView *m_headImageBk;
@property (nonatomic) BOOL canShowImageIcon;
@property (nonatomic) BOOL isPayContent;
@property (nonatomic) BOOL isPaid;
@property (nonatomic) struct CGSize { double width; double height; } payTagSize;
@property (retain, nonatomic) UIImage *paySubcribeTagImage;
@property (weak, nonatomic) id<ReaderItemViewDelegate> m_delegate;
@property (nonatomic) BOOL isBrandLiveContent;
@property (nonatomic) BOOL isBrandLive;
@property (nonatomic) struct CGSize { double width; double height; } brandLiveSize;
@property (copy, nonatomic) NSString *brandLiveStatusWording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTableViewDidScrollDown;
- (void)startInitView;
- (void)setHighlighted:(BOOL)a0;
- (void)forceSetHighlighted:(BOOL)a0;
- (void)topView;
- (void)normalView;
- (void)initTopTitleView;
- (void)initNormalTitleView;
- (void)initTag;
- (id)getWebImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)itemLabelWithFont:(double)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)richTextWithFont:(id)a0 width:(double)a1;
- (id)timeText:(unsigned long long)a0;
- (void)initCoverImageView;
- (void)initHighlightMaskView;
- (id)getCoverImageView;
- (void)initTopViewCoverLayer;
- (void)setTopViewLoading:(BOOL)a0;
- (double)appendNodeViewHeightIfIndex;
- (void)onLoadImageOK:(id)a0;
- (void)onBeginTouch;
- (void)onClicked;
- (void)NotifyItemClicked;
- (void)onTouchRepeat;
- (void)handleLongPressEx:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
