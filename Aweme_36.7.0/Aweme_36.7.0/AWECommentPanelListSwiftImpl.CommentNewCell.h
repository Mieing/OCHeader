@class NSArray;

@interface AWECommentPanelListSwiftImpl.CommentNewCell : UICollectionViewCell <UIGestureRecognizerDelegate, NSObject> {
    void /* unknown type, empty encoding */ hiddenCommentContentAnimating;
    void /* unknown type, empty encoding */ highlightText;
    void /* unknown type, empty encoding */ viewmodel;
    void /* unknown type, empty encoding */ videoPublishProgressView;
    void /* unknown type, empty encoding */ debugTagView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_touchHighlightBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_suggestRequestLongPressGestureRecognizer;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleLongPressWithGes:(id)a0;
- (void)addSticker;
- (void)handleSuggestRequestLongPressWithGes:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
