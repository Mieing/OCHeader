@class NSString, RichTextView;

@interface FavTextDetailViewController : FavBaseDetailViewController <FavActionSheetDelegate, ILinkEventExt, IFavoritesExt, FavForwardLogicDelegate, WCActionSheetDelegate> {
    RichTextView *m_textLabel;
    NSString *m_nsText;
    NSString *m_copyedText;
    double m_cacheTextHeight;
    double m_cacheWidth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (unsigned long long)getParserType;
- (void)initTextLabel;
- (void)viewDidLayoutSubviews;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)a0;
- (void)genContent:(id)a0 indexPath:(id)a1;
- (void)onMenuControllerWillHide:(id)a0;
- (void)onAction:(id)a0;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedForwardToUser:(id)a0;
- (void)onFavActionSheetSelectedItemWithType:(long long)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onLinkLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onWeAppMPShortLinkLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onPhoneLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onCopy:(id)a0;
- (void)showMenuItemForText:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onWeAppMPShortLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getFavForawrdViewController;
- (void).cxx_destruct;

@end
