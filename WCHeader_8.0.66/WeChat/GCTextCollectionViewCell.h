@class NSMutableDictionary, NSString, UILabel, RichTextView;

@interface GCTextCollectionViewCell : GCChatBaseCell <ILinkEventExt>

@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) UILabel *sysTitleLabel;
@property (retain, nonatomic) NSMutableDictionary *linkJumpInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textLayoutInfoForTextCellModel:(id)a0;
+ (id)centerTipTextLayoutWithMarginInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
+ (void)onCalculatLayoutInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForTextModel:(id)a0 font:(id)a1 outArrStyles:(id *)a2;
+ (unsigned long long)parseTypeForContentModel:(id)a0;
+ (id)getRichTextViewConfig:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textCellModel;
- (void)configureWithCellModel:(id)a0;
- (void)initRichTextView;
- (id)linkBlockForUrl:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)handleLongPressAt:(id)a0;
- (void).cxx_destruct;

@end
