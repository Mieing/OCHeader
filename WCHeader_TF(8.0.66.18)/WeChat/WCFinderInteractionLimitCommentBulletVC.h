@class WCTableViewManager, NSNumber, WCFinderContact;

@interface WCFinderInteractionLimitCommentBulletVC : MMUIViewController

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) NSNumber *svrSelectValue;
@property (retain, nonatomic) NSNumber *currentSelectValue;
@property (retain, nonatomic) WCFinderContact *contact;
@property (copy, nonatomic) id /* block */ complectionBlock;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (id)getTitleArray;
- (void)reloadData;
- (id)createCellWithTitle:(id)a0 subTitle:(id)a1 isSelected:(BOOL)a2;
- (void)onDone;
- (void)onReturn;
- (void)clickCellAction:(id)a0;
- (void).cxx_destruct;

@end
