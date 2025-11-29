@class NSMutableArray, IESLiveAudioTextContainerViewModel, NSString, IESLiveGCDTimer, UIView, UILabel, UITableView;

@interface IESLiveAudioTextContainerView : HTSEventForwardingView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) IESLiveAudioTextContainerViewModel *model;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *cellData;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL hasInit;
@property (nonatomic) double yOffset;
@property (nonatomic) BOOL needToTop;
@property (nonatomic) double initTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showIfNeed;
- (void)initView;
- (void)stopAutoScroll;
- (id)genGradient;
- (void)hiddenAndStop;
- (void)startAutoScroll:(int)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initData;

@end
