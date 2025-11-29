@class UIViewController, AWESettingItemModel;

@interface AWESettingsTableViewCellBaseController : NSObject

@property (retain, nonatomic) AWESettingItemModel *itemModel;
@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isCellDisplaying;
@property (readonly, nonatomic) BOOL isCellOnScreen;

- (void)didEndDisplayCell;
- (void)didSelectCell;
- (void)didBindItemModel;
- (id)initWithItemModel:(id)a0 container:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)willDisplayCell;
- (void)viewDidDisappear;

@end
