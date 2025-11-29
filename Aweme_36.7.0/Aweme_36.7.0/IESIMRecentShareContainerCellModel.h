@class NSArray, NSString, NSAttributedString, NSIndexPath;

@interface IESIMRecentShareContainerCellModel : NSObject <IESIMContactPickerContentCellModelProtocol>

@property (retain, nonatomic) NSArray *shareLists;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL disableSelect;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *cellReuseIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *rawData;
@property (copy, nonatomic) id /* block */ selectItemHandler;
@property (copy, nonatomic) id /* block */ reloadDataHandler;
@property (copy, nonatomic) id /* block */ horizontalSpaceDidScroll;
@property (copy, nonatomic) id /* block */ itemDidShowHandler;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ didClickRightButtonBlock;
@property (retain, nonatomic) NSAttributedString *middleDescAttr;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelected:(BOOL)a0;
- (id)getCellModelWithShareModel:(id)a0;
- (void)setupRawDataWithShareLists:(id)a0;
- (id)initWithShareLists:(id)a0;
- (void).cxx_destruct;
- (void)updateBackgroundColor:(id)a0;

@end
