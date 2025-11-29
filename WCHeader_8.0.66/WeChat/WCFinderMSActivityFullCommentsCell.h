@class UILabel, UIView;

@interface WCFinderMSActivityFullCommentsCell : WCFinderMSActivityBaseCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *fullCommentsLabel;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onContentVMChanged;
- (void)setRoundCorner;
- (void)onClickFullComments;
- (void).cxx_destruct;

@end
