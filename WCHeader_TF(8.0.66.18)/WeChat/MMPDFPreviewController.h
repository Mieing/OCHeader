@class UIColor, NSString, PDFView, NSURL, PDFDocument;

@interface MMPDFPreviewController : MMUIViewController <FileDetailCustomizedPreviewController, PDFViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *pdfFileURL;
@property (retain, nonatomic) PDFDocument *pdfDocument;
@property (retain, nonatomic) PDFView *pdfView;
@property (retain, nonatomic) UIColor *pdfViewBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadFileURL:(id)a0;
- (BOOL)shouldHandleSingleTapAt:(id)a0;
- (void)viewDidLoad;
- (void)loadPDFWithFileURL:(id)a0;
- (void)fixContentInset;
- (id)getMainScrollView;
- (void).cxx_destruct;

@end
