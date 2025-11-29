@class UIView, NSString, BDRTextLayoutWrapper, BDTextLayoutPageData, BDReaderLinkView, BDReaderPenetrableView, BDReaderLineView, BDReaderAttachmentView, BDReaderConfig, BDRTextViewWrapper;
@protocol BDRTextContentViewDataSource, BDReaderSelectionViewProtocol, BDRTextContentViewDelegate;

@interface BDRTextContentView : UIView <BDReaderLineViewDelegate, BDReaderLinkViewDelegate, BDReaderFootnoteItemViewDelegate, BDReaderInsertViewProtocol>

@property (retain, nonatomic) BDRTextViewWrapper *textView;
@property (retain, nonatomic) BDReaderLineView *lineView;
@property (retain, nonatomic) BDReaderLinkView *linkView;
@property (retain, nonatomic) BDReaderAttachmentView *attachmentView;
@property (retain, nonatomic) BDReaderPenetrableView *penetrableContainer;
@property (readonly, nonatomic) BDRTextLayoutWrapper *textLayout;
@property (retain, nonatomic) UIView<BDReaderSelectionViewProtocol> *selectionView;
@property (retain, nonatomic) BDTextLayoutPageData *pageData;
@property (retain, nonatomic) BDReaderConfig *configData;
@property (weak, nonatomic) id<BDRTextContentViewDelegate> delegate;
@property (weak, nonatomic) id<BDRTextContentViewDataSource> dataSource;
@property (nonatomic) BOOL debugMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)readerInsertedViewThemeConfigChange:(id)a0;
- (id)fixLineText:(id)a0;
- (void)configLayoutPage;
- (void)configAttrbutedString;
- (void)bindAttachment;
- (void)handlePlaceholderAttachment:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleLinkAttachment:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)handleFootnoteAttachment:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)handlePlaceholderAttachment:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)handleLayoutLineInfo:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)footnote:(id)a0 didTapWithAttachment:(id)a1;
- (id)getAllLayoutLines;
- (void)updateDarkedColorForBorder:(id)a0 config:(id)a1;
- (void)reloadLineInfos;
- (void)lineView:(id)a0 didClickLineItem:(id)a1;
- (void)linkView:(id)a0 didClickLinkAttachment:(id)a1;
- (id)readerInsertedViewRequestInsertedView;
- (void)updateConfiguration:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLayout;

@end
