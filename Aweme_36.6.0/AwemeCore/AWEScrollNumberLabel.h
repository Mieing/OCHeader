@class UIFont, NSString, UIColor, UIImage, NSMutableArray;

@interface AWEScrollNumberLabel : UIStackView <UITableViewDelegate, UITableViewDataSource, POPAnimationDelegate>

@property (copy, nonatomic) NSString *amountPattern;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *amountString;
@property (nonatomic) struct CGSize { double width; double height; } unitSize;
@property (nonatomic) double unitSpacing;
@property (nonatomic) double signWidth;
@property (nonatomic) long long signCount;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct CGPoint { double x; double y; } textOffset;
@property (retain, nonatomic) UIImage *unitBgImage;
@property (copy, nonatomic) id /* block */ unitBgViewMaker;
@property (retain, nonatomic) NSMutableArray *units;
@property (retain, nonatomic) NSMutableArray *unitBgViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAmountPattern:(id)a0 unitSize:(struct CGSize { double x0; double x1; })a1 unitSpacing:(double)a2 signWidth:(double)a3 textFont:(id)a4 textColor:(id)a5 textOffset:(struct CGPoint { double x0; double x1; })a6 unitBgImage:(id)a7;
- (void)updateWithAmount:(id)a0 unitSize:(struct CGSize { double x0; double x1; })a1 unitSpacing:(double)a2 signWidth:(double)a3 textFont:(id)a4 textColor:(id)a5 textOffset:(struct CGPoint { double x0; double x1; })a6 unitBgImage:(id)a7;
- (void)countingToAmount:(id)a0 duration:(double)a1 baseDelayTime:(double)a2 bitIntervalDeleyTime:(double)a3 timingFunction:(id)a4 roundsCount:(long long)a5 fromZero:(BOOL)a6;
- (BOOL)isPureInt:(id)a0;
- (void)createUnitBgs;
- (void)createUnits;
- (void)fixUnitBgs;
- (void)fixUnits;
- (BOOL)checkIsAmountStyleMatched:(id)a0;
- (id)initWithAmountPattern:(id)a0 unitSize:(struct CGSize { double x0; double x1; })a1 unitSpacing:(double)a2 signWidth:(double)a3 textFont:(id)a4 textColor:(id)a5 textOffset:(struct CGPoint { double x0; double x1; })a6 unitBgViewMaker:(id /* block */)a7;
- (void)countingToAmount;
- (void)countingToAmount:(id)a0 completionBlock:(id /* block */)a1;
- (void)countingToAmountWithDuration:(double)a0 baseDelayTime:(double)a1 bitIntervalDeleyTime:(double)a2 timingFunction:(id)a3;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)viewHeight;
- (double)viewWidth;

@end
