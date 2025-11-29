@class UIView;

@interface WCFinderMSActivityTopBlankCell : WCFinderMSActivityBaseCell

@property (retain, nonatomic) UIView *separatorLine;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)onContentVMChanged;
- (void).cxx_destruct;

@end
