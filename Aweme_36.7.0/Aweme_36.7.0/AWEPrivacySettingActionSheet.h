@class NSArray, NSString, UIView, NSNumber, UITableView;

@interface AWEPrivacySettingActionSheet : UIView <UITableViewDelegate, UITableViewDataSource, AWEPrivacySettingActionSheetProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL useCardUIStyle;
@property (nonatomic) BOOL fromHalfScreen;
@property (nonatomic) BOOL adaptIpadFromHalfVC;
@property (retain, nonatomic) UIView *indicatorLineView;
@property (retain, nonatomic) NSNumber *selectIndex;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ highLightBlock;
@property (copy, nonatomic) id /* block */ clickPrivacyButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)sheetWithConfig:(id)a0;

- (id)aAWEPadModuleAdapter;
- (void)rotated:(id)a0;
- (void)clickHighlight;
- (void)clickPrivacyButton;
- (double)getCellHeight:(id)a0 containerWidth:(double)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)cancel;

@end
