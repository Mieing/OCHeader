@interface AWETemplateCellViewModelManager : NSObject <AWECommentTemplateCellViewModelManager> {
    void /* unknown type, empty encoding */ map;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ currentEditCell;
}

+ (void)bindingViewPrepareReuse:(id)a0;

- (id)viewModelForModel:(id)a0 maxWidth:(double)a1 isLight:(BOOL)a2;
- (void)themeDidUpdate:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
