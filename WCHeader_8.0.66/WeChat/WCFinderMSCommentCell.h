@class WCFinderComment, NSString, UILabel, RichTextView, UIView;

@interface WCFinderMSCommentCell : WCFinderMSActivityBaseCell <RichTextLayoutDelegate, ILinkEventExt, WCFinderFeedContentVMExt, WCFinderDataItemExt>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) RichTextView *contentLabel;
@property (retain, nonatomic) UILabel *closureLabel;
@property (retain, nonatomic) WCFinderComment *currentComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;
+ (double)additionalPaddingForVM:(id)a0 commentIndex:(unsigned long long)a1;
+ (id)getCommentContentForVM:(id)a0 commentIndex:(unsigned long long)a1 showSceneIntroduce:(BOOL)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onContentVMChanged;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickClosure;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onFeedContent:(id)a0 favDataChanged:(id)a1;
- (void)setRoundCorner;
- (void)onFinderDataItemUpdate:(id)a0 scene:(int)a1 source:(long long)a2;
- (void).cxx_destruct;

@end
