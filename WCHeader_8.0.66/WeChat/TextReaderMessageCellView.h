@class MMUIButton, NSString, UIImageView, TextReaderMessageViewModel, WAAppIdToUsernameTransfer, NSMutableArray, RichTextView;

@interface TextReaderMessageCellView : ReaderMessageCellView <RichTextLayoutDelegate, ILinkEventExt> {
    UIImageView *m_bgImageView;
    RichTextView *m_mainTitleView;
    RichTextView *m_titleView;
    MMUIButton *m_detailButton;
    WAAppIdToUsernameTransfer *m_appIdTransfer;
}

@property (retain, nonatomic) NSMutableArray *voiceOverElements;
@property (readonly, nonatomic) TextReaderMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)initDetailButton;
- (void)setHighlighted:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void)onWeAppLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)initVoiceOverElements;
- (void)updateVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
