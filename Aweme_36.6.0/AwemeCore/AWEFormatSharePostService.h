@interface AWEFormatSharePostService : HTSService <AWEShareSelectDelegate, DUXSheetDelegate, AWEFormatSharePostInterface> {
    void /* unknown type, empty encoding */ sharePostViewController;
    void /* unknown type, empty encoding */ currentSheet;
}

- (void)didSelectedAwemeModel:(id)a0;
- (BOOL)selectedAwemeModel:(id)a0;
- (unsigned long long)selectedIndexAwemeModel:(id)a0;
- (BOOL)canSelectedAwemeModel:(id)a0;
- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickReturnButton:(id)a0;
- (void)openSharePostPanel;
- (void).cxx_destruct;
- (id)init;

@end
