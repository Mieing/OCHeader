@class NSMutableArray;

@interface GlobalSearchInputConfig : NSObject

@property (nonatomic) BOOL AIMergeSearch;
@property (nonatomic) BOOL hideSearchBar;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) BOOL useNewBtnMode;
@property (nonatomic) unsigned int largeInputShowMinTextLength;
@property (retain, nonatomic) NSMutableArray *checkBoxes;
@property (retain, nonatomic) NSMutableArray *actionButtons;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
