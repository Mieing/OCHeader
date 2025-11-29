@class AWENewPublishTableCell;

@interface AWEPostPageHotSpotElement : AWEPostPageCellElement

@property (retain, nonatomic) AWENewPublishTableCell *hotSpotCell;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)setupCell:(id)a0;
- (void)configureHotSpotCellWithInfo:(id)a0;
- (void)cancelHotSpotRelate;
- (void)hotSpotDidChangeNotification:(id)a0;
- (void)newVideoPublishBroadCastNotification:(id)a0;
- (void)PostVideoRelatedHotSpot:(id)a0;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)addObserver;
- (void)viewDidLoad;
- (id)cell;
- (void)didSelect;

@end
