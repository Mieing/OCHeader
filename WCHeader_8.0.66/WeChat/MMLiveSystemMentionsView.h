@class NSMutableArray, NSString, UIView, MMUIButton, UITableView;
@protocol MMLiveSystemMentionsViewDelegate;

@interface MMLiveSystemMentionsView : MMUIView <UITableViewDelegate, UITableViewDataSource, MMLiveSystemMentionCellDelegate>

@property (retain, nonatomic) UIView *mentionsTableViewContainer;
@property (retain, nonatomic) UITableView *mentionsTableView;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (nonatomic) BOOL isFolded;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) NSMutableArray *liveSystemMentions;
@property (weak, nonatomic) id<MMLiveSystemMentionsViewDelegate> delegate;
@property (nonatomic) struct CGPoint { double x; double y; } locationPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)singleSystemMentionHeight;

- (id)initWithMaxHeight:(double)a0 width:(double)a1;
- (void)initData;
- (void)updateDataOnFetchNewDone;
- (void)setupUIWith:(double)a0 maxHeight:(double)a1;
- (void)refreshUIOnDataReset;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)tableViewHasMask;
- (void)addMaskLayerForTableContainer;
- (void)expand;
- (void)fold;
- (void)updateShadowHidden;
- (BOOL)jumpWithMention:(id)a0;
- (void)setMentionReadAndDeleteCellForIndex:(id)a0;
- (void)setMentionsReadForIndex:(id)a0;
- (void)updateOnDataSourceAndUIChanged;
- (BOOL)cleanViewOnDataSourceEmpty;
- (BOOL)canBeFolded;
- (double)contentMaxHeight;
- (id)curUsername;
- (id)foldedIndexPaths;
- (void)onClickArrowButton;
- (void)onLiveSystemMentionsCellClick:(id)a0 mention:(id)a1;
- (void)onLiveSystemMentionsCellCloseBtnClick:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
