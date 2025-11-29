@class UIView, MMFinderLiveTask, MMUIButton;

@interface WCFinderLiveCompleteHelpView : UIView

@property (retain, nonatomic) MMUIButton *creatorCenterBtn;
@property (retain, nonatomic) MMUIButton *helpEntranceBtn;
@property (retain, nonatomic) UIView *sepelateLine;
@property (retain, nonatomic) MMFinderLiveTask *liveTask;
@property (copy, nonatomic) id /* block */ onCreatorCenterBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)helpEntranceBtnClick;
- (void)creatorCenterClick;
- (void).cxx_destruct;

@end
