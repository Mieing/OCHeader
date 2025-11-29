@class IESECUIImageView, UITableView, IESECMallListKitBigFontConfig, IESECListKitCellFeedbackData, UILabel, NSString, UIButton;

@interface IESECMallFeedbackMaskView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) IESECUIImageView *backBtnImageView;
@property (retain, nonatomic) IESECUIImageView *closeBtnImageView;
@property (retain, nonatomic) UILabel *backBtnTextView;
@property (nonatomic) BOOL isMore;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) IESECMallListKitBigFontConfig *bigFontConfig;
@property (copy, nonatomic) id /* block */ closeClick;
@property (copy, nonatomic) id /* block */ backClick;
@property (copy, nonatomic) id /* block */ moreClick;
@property (copy, nonatomic) id /* block */ reasonClick;
@property (retain, nonatomic) IESECListKitCellFeedbackData *totalFeedbackList;
@property (retain, nonatomic) IESECListKitCellFeedbackData *currentFeedbackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildUI;
- (void)_back;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bigFontConfig:(id)a1;
- (void)resetIsMoreAndUpdate;
- (void)_close;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
