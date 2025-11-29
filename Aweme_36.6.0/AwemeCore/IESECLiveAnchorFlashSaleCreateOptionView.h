@class UIStackView, UIView, NSArray, NSString, IESECLiveAnchorCreateFlashSaleItem, NSDictionary, UITableView, UIButton, IESECSearchBar, NSMutableArray, NSIndexPath;

@interface IESECLiveAnchorFlashSaleCreateOptionView : IESECLiveAnchorNavigationBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESECSearchBar *searchBar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *searchBarSeparator;
@property (retain, nonatomic) UIStackView *searchBarStackView;
@property (retain, nonatomic) UIButton *multipleConfirmButton;
@property (retain, nonatomic) NSArray *titleArrayForSections;
@property (retain, nonatomic) NSDictionary *contentArrayForSections;
@property (retain, nonatomic) NSMutableArray *defaultContentArray;
@property (nonatomic) long long lastInputTextLength;
@property (nonatomic) BOOL considerBrandList;
@property (copy, nonatomic) NSArray *fields;
@property (retain, nonatomic) NSMutableArray *selectedField;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSString *lastSelectedValueID;
@property (retain, nonatomic) NSDictionary *sectionsInfo;
@property (retain, nonatomic) NSArray *valueIDs;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleItem *brandList;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ didConfirmBlock;
@property (copy, nonatomic) id /* block */ displayTextFormatter;
@property (copy, nonatomic) id /* block */ fetchBrandBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCancelButton;
- (void)checkMultipleSelectedStyle;
- (void)pushOnView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)matchedIndex:(id)a0;
- (BOOL)shouldShowNoBrandCell;
- (id)currentTextInSection:(id)a0;
- (id)currentDisableToastTextInSection:(id)a0;
- (id)newSelectedIndexAfterToast;
- (id)currentValueIDInSection:(id)a0;
- (void)clickMultipleConfirmButton;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end
