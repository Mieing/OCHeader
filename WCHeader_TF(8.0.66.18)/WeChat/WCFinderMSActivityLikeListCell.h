@class NSString, RichTextView, UIView;

@interface WCFinderMSActivityLikeListCell : WCFinderMSActivityBaseCell <ILinkEventExt, WCFinderFeedContentVMExt, WCFinderDataItemExt>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) RichTextView *likeView;
@property (retain, nonatomic) UIView *bottomSeparatorLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;
+ (id)getLikeListNickNameForVM:(id)a0 showSceneIntroduce:(BOOL)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onContentVMChanged;
- (void)setRoundCorner;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onFeedContent:(id)a0 favDataChanged:(id)a1;
- (void)onFinderDataItemUpdate:(id)a0 scene:(int)a1 source:(long long)a2;
- (void).cxx_destruct;

@end
