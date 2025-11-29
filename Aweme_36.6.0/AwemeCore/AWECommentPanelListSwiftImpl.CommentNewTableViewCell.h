@class NSArray;

@interface AWECommentPanelListSwiftImpl.CommentNewTableViewCell : UITableViewCell <NSObject> {
    void /* unknown type, empty encoding */ hiddenCommentContentAnimating;
    void /* unknown type, empty encoding */ highlightText;
    void /* unknown type, empty encoding */ viewmodel;
    void /* unknown type, empty encoding */ videoPublishProgressView;
    void /* unknown type, empty encoding */ debugTagView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_suggestRequestLongPressGestureRecognizer;
}

@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)handleLongPressWithGes:(id)a0;
- (void)addSticker;
- (void)handleSuggestRequestLongPressWithGes:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
