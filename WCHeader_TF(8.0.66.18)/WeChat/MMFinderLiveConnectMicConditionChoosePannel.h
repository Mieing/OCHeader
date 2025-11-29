@class NSArray, NSString, NSIndexPath, MMTableView;
@protocol MMFinderLiveConnectMicConditionChooseDelegate;

@interface MMFinderLiveConnectMicConditionChoosePannel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *tableView;
@property (nonatomic) unsigned long long lastSelectType;
@property (retain, nonatomic) NSIndexPath *lastSelectIdx;
@property (retain, nonatomic) NSArray *unForbiddenTypes;
@property (weak, nonatomic) id<MMFinderLiveConnectMicConditionChooseDelegate> conditionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isConditionTypeValid:(unsigned long long)a0;

- (id)initWithCurConditionType:(unsigned long long)a0 unForbiddenTypes:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)initView;
- (void)pageSheetDidClose:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (unsigned long long)getConditionType:(long long)a0;
- (id)getConditionTitle:(unsigned long long)a0;
- (void).cxx_destruct;

@end
