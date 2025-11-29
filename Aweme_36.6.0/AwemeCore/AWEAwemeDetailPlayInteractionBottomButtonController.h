@class NSString;

@interface AWEAwemeDetailPlayInteractionBottomButtonController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol>

@property (nonatomic) long long indexOfCellToConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willConfigCell:(id)a0 model:(id)a1;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)viewDidLoad;

@end
