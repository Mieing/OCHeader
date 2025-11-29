@class NSString, ShelfInfo, ShelfCardInfo, UIView, UILabel, UIButton;
@protocol IESLiveNativeAppCoverSelectDelegate;

@interface IESLiveNativeAppCoverSelectViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (retain, nonatomic) ShelfCardInfo *cardInfo;
@property (weak, nonatomic) id<IESLiveNativeAppCoverSelectDelegate> delegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *customizedCover;
@property (retain, nonatomic) UIButton *posterCover;
@property (retain, nonatomic) UILabel *posterCoverTitle;
@property (retain, nonatomic) UILabel *posterCoverDesc;
@property (retain, nonatomic) UIButton *presetCover;
@property (retain, nonatomic) UIButton *screenShotCover;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)blankAreaDidClick;
- (id)initWithShelfInfo:(id)a0 cardInfo:(id)a1 delegate:(id)a2;
- (id)buildLine;
- (void)updateCardInfo;
- (void)selectCoverType:(int)a0;
- (void)customizedCoverSelected:(id)a0;
- (void)posterCoverSelected:(id)a0;
- (void)presetCoverSelected:(id)a0;
- (void)screenShotCoverSelected:(id)a0;
- (void)cancelSelected:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setUpUI;
- (void)closeWithCompletion:(id /* block */)a0;

@end
