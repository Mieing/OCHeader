@class UILabel, RichTextView, NSString;

@interface WCFinderMSTextContentCell : WCFinderMSActivityBaseCell <RichTextLayoutDelegate, ILinkEventExt>

@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UILabel *closureLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)onContentVMChanged;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickClosure;
- (void)onLongPress:(id)a0;
- (void).cxx_destruct;

@end
