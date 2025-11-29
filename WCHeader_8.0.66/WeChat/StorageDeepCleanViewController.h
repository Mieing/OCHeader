@class NSArray, NSString, UILabel, UIView, UIButton;
@protocol StorageDeepCleanDelete;

@interface StorageDeepCleanViewController : MMUIViewController <IDeepCleanClassExt, WCActionSheetDelegate>

@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UILabel *estimateTimeLabel;
@property (retain, nonatomic) UIButton *bottomButton;
@property (nonatomic) unsigned long long dcState;
@property (nonatomic) float cleanProgress;
@property (nonatomic) float estimatedTimeMins;
@property (retain, nonatomic) NSArray *cleanArray;
@property (nonatomic) unsigned long long beforeCleanSize;
@property (weak, nonatomic) id<StorageDeepCleanDelete> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getCleanSize;
- (id)getEstimateTimeDesc;
- (id)getCleanSizeDesc;
- (id)getCurrentProgress;
- (id)getCurrentEstimateTime;
- (void)calculateProgressLevel;
- (void)p_getWarningTipView;
- (id)p_getTitleAttrString:(id)a0;
- (void)refreshView;
- (void)setupView;
- (id)initWithDeepCleanClass:(id)a0;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)onDeepClean:(id)a0 progressChange:(float)a1;
- (void)onDeepCleanStop:(id)a0;
- (void)showDeleteActionSheet;
- (void)showCancelActionSheet;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)deepCleanBegin;
- (void)onPressOK;
- (void)onPressCancel;
- (void).cxx_destruct;

@end
