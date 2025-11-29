@class NSString, AWEAwemeModel, YYAnimatedImageView, DUXBaseLabel;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEPlayInteractionVideoNoteButtonView : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) DUXBaseLabel *contentView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) YYAnimatedImageView *imageView;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithIcon:(id)a0 title:(id)a1 dec:(id)a2;
- (BOOL)shouldLargeFontEnable;
- (BOOL)hitInnerVideoSingleChapterUIOptimizeExp;
- (void).cxx_destruct;
- (id)textFont;
- (double)verticalMargin;
- (id)init;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)setupUI;
- (id)bgColor;

@end
