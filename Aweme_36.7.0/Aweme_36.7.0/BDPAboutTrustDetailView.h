@class UIButton, NSArray, UIImageView, NSString, UIView, BDPUniqueID, UILabel;

@interface BDPAboutTrustDetailView : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView *mainContentView;
@property (retain, nonatomic) UIImageView *mainIcon;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) long long quotasNums;
@property (nonatomic) long long quotasMeetNums;
@property (nonatomic) double quotaHeight;
@property (nonatomic) double totalHeight;
@property (retain, nonatomic) UIView *quotaContentView;
@property (retain, nonatomic) NSArray *titleLabels;
@property (retain, nonatomic) NSArray *detailLabels;
@property (retain, nonatomic) NSArray *icons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonDidClick:(id)a0;
- (id)detailLabelWithText:(id)a0;
- (id)titleLabelWithText:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)iconWithImageName:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)show;
- (id)initWithUniqueID:(id)a0;
- (void)setUpUI;

@end
