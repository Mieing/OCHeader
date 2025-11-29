@class NSString, MMUIViewController, NSMutableArray, WAPopOverView;

@interface WAPopOverTaskBarlogic : MMObject <WAPopOverTaskBarViewDelegate>

@property (copy, nonatomic) NSString *currentUsername;
@property (nonatomic) unsigned int currentDebugMode;
@property (retain, nonatomic) NSMutableArray *arrTaskItem;
@property (weak, nonatomic) MMUIViewController *containerVC;
@property (weak, nonatomic) WAPopOverView *popOverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUsername:(id)a0 debugMode:(unsigned int)a1;
- (void)initData;
- (void)reloadTaskItems;
- (void)loadTaskItemListWithCount:(unsigned int)a0;
- (id)taskItemAtRowIndex:(long long)a0;
- (BOOL)isShouldShowTaskBarView;
- (void)taskBarView:(id)a0 didSelectTaskItem:(id)a1;
- (void).cxx_destruct;

@end
