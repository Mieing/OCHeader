@class UIView, NSString, NSArray, AWESearchTextExtractionHeaderView, UIImage, UIImageView, AWESearchTextExtractionFooterView, UITableView, NSMutableArray, AWESearchTextExtractionAbnormalView, UIVisualEffectView, NSDictionary;

@interface AWESearchTextExtractionView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UIVisualEffectView *backEffectView;
@property (retain, nonatomic) UITableView *textExtractionTableView;
@property (retain, nonatomic) UIView *tableViewBackGroundView;
@property (retain, nonatomic) AWESearchTextExtractionHeaderView *headerView;
@property (retain, nonatomic) AWESearchTextExtractionFooterView *footerView;
@property (copy, nonatomic) NSArray *textArray;
@property (copy, nonatomic) NSString *requestIdentify;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSMutableArray *selectTextArray;
@property (retain, nonatomic) UIImage *originBackImage;
@property (retain, nonatomic) AWESearchTextExtractionAbnormalView *abnormalView;
@property (nonatomic) BOOL canCopyExtraction;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animateTargetRect;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) long long awemeType;
@property (nonatomic) BOOL needAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showTextExtractionInSuperView:(id)a0 videoIndntify:(id)a1 searchID:(id)a2 backImage:(id)a3 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 source:(id)a5 enterFrom:(id)a6 awemeType:(long long)a7;
+ (void)showTextExtractionInSuperView:(id)a0 videoIndntify:(id)a1 searchID:(id)a2 backImage:(id)a3 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 source:(id)a5 enterFrom:(id)a6 awemeType:(long long)a7 textArray:(id)a8 needAnimation:(BOOL)a9 logExtra:(id)a10;

- (void)setupUI:(long long)a0;
- (id)getImageFromView:(id)a0;
- (void)addGradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 BackImage:(id)a1 AwemeType:(long long)a2;
- (void)extractionSoureTypeWithString:(id)a0;
- (void)analysicTextExtractionWithData:(id)a0;
- (void)requestWithIdenfify:(id)a0 AwemeType:(long long)a1;
- (void)enterAnimationWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 extractionView:(id)a1 superView:(id)a2;
- (void)beginnerGuidance;
- (void)extractionClickTracker;
- (id)formattingSelectExtractionWithArray:(id)a0;
- (id)selectExtractionIdStringWithArray:(id)a0;
- (void)closeViewAnimated:(BOOL)a0;
- (void)submitSelectText;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
