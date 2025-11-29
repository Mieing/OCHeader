@class AWENoxusPlayerSettingTypeModel, NSString, AWELVideoXiguaGuideModel, NSArray, UIView, NSMutableArray, UITableView;
@protocol AWENoxusPlayerSettingTypeViewDelegate;

@interface AWENoxusPlayerSettingTypeView : UIView <UITableViewDelegate, UITableViewDataSource, AWENoxusPlayerSettingTypeView>

@property (retain, nonatomic) NSMutableArray *resolutionArray;
@property (retain, nonatomic) NSMutableArray *speedArray;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *dismissView;
@property (nonatomic) double containerWidth;
@property (weak, nonatomic) id<AWENoxusPlayerSettingTypeViewDelegate> delegate;
@property (readonly, nonatomic) AWENoxusPlayerSettingTypeModel *selectModel;
@property (nonatomic) BOOL resetSpeed;
@property (nonatomic) BOOL isLandScape;
@property (retain, nonatomic) AWELVideoXiguaGuideModel *videoModel;
@property (copy, nonatomic) NSString *eid;
@property (nonatomic) BOOL isRemotePlay;
@property (nonatomic) BOOL showingGuideXigua;
@property (nonatomic) BOOL isLongPressSpeedOptimize;
@property (retain, nonatomic) NSArray *longPressSpeedSettingArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleFromSpeedType:(unsigned long long)a0;
+ (id)shortTitleFromPixelType:(unsigned long long)a0;
+ (id)titleFromPixelType:(unsigned long long)a0 needSpace:(BOOL)a1;
+ (id)titleNewFromLandscapePixelType:(unsigned long long)a0;
+ (double)valueFromSpeedType:(unsigned long long)a0;
+ (double)valueFromNewSpeedType:(long long)a0;
+ (id)landScapeTitleFromSpeedType:(unsigned long long)a0;
+ (id)landScapeTitleFromNewSpeedType:(long long)a0;
+ (id)titleFromNewSpeedType:(long long)a0;
+ (id)titleFromPixelType:(unsigned long long)a0;
+ (id)titleFromLandscapePixelType:(unsigned long long)a0;
+ (double)valueFromPixelType:(unsigned long long)a0;

- (void)setUpPixelType:(id)a0;
- (void)showViewWithDataType:(unsigned long long)a0;
- (void)focusSelectModel:(id)a0;
- (void)dismissAnimate:(BOOL)a0;
- (id)sortArrayByType:(id)a0;
- (id)newSpeedArray;
- (BOOL)needFilterWithSpeedType:(unsigned long long)a0;
- (BOOL)needFilterWithNewSpeedType:(long long)a0;
- (void)setupLandscapeResolutionList:(id)a0 currentResolutionType:(unsigned long long)a1;
- (void)showLandscapeSpeedSettingViewWithNewSpeedType:(long long)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dataArray;
- (double)cellHeight;
- (id)selectedCell;

@end
