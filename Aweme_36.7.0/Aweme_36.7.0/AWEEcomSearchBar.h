@class UIFont, NSString, NSTimer, NSArray, AWESearchTagIcon, NSMutableDictionary, AWESearchBarCapsuleView, AWESearchTagText;

@interface AWEEcomSearchBar : AWESearchBar <UITextFieldDelegate, AWESearchBarCapsuleViewDelegate>

@property (retain, nonatomic) NSTimer *textChangedTimer;
@property (retain, nonatomic) NSString *lastText;
@property (copy, nonatomic) NSArray *capsules;
@property (copy, nonatomic) id /* block */ searchBarCharacterDidChange;
@property (copy, nonatomic) id /* block */ searchBarSelectionDidChange;
@property (copy, nonatomic) id /* block */ searchBarCapsuleDidChange;
@property (retain, nonatomic) AWESearchBarCapsuleView *capsuleView;
@property (copy, nonatomic) NSString *capsuleIcon;
@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSString *realText;
@property (nonatomic) BOOL capsuleIsDarkMode;
@property (retain, nonatomic) UIFont *customOwnSearchFieldFont;
@property (nonatomic) unsigned long long tagType;
@property (retain, nonatomic) AWESearchTagIcon *placeHolderTagIcon;
@property (retain, nonatomic) AWESearchTagText *placeHolderTagText;
@property (nonatomic) BOOL shouldTrackCapsuleNewClick;
@property (retain, nonatomic) NSMutableDictionary *capsuleNewTrackExtraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTextColor:(id)a0;
- (void)removeCapsule;
- (void)setupCapsuleViewIfNeeded;
- (void)p_updatePlaceHolder:(id)a0 withImage:(id)a1 attributes:(id)a2 maxWidth:(double)a3 maxSize:(struct CGSize { double x0; double x1; })a4 currentString:(id)a5;
- (void)fireTimer;
- (void)textChangedAction;
- (void)capsuleViewDidClick:(id)a0 index:(long long)a1 isLastItem:(BOOL)a2;
- (void)updateCapsule:(id)a0;
- (void)appendCapsule:(id)a0;
- (BOOL)isCapsuleShown;
- (BOOL)hasCapsule;
- (void)updateCapsuleTextColor:(id)a0;
- (void)updatePlaceHolderTagIcon:(id)a0 tagText:(id)a1 withTagTypeString:(id)a2;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)a0;
- (void)setText:(id)a0;
- (void)invalidateTimer;
- (void)textFieldDidEndEditing:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleFrame;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)textFieldDidChangeSelection:(id)a0;
- (void)updateTextColor;

@end
