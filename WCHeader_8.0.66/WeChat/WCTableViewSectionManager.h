@class UITableView, NSString, NSMutableArray, UIView, NSAttributedString, NSMutableAttributedString;

@interface WCTableViewSectionManager : NSObject

@property (nonatomic) double lastTableWidth;
@property (nonatomic) BOOL shouldRefreshHeaderAtSizeChange;
@property (nonatomic) BOOL shouldRefreshFooterAtSizeChange;
@property (nonatomic) unsigned long long cellMode;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSAttributedString *attributedHeaderTail;
@property (copy, nonatomic) NSString *footerTitle;
@property (copy, nonatomic) NSMutableAttributedString *attributedHeaderTitle;
@property (copy, nonatomic) NSMutableAttributedString *attributedFooterTitle;
@property (nonatomic) double fHeaderHeight;
@property (nonatomic) double fFooterHeight;
@property (nonatomic) double fTopLineLeftInset;
@property (nonatomic) double fTopLineRightInset;
@property (nonatomic) double fBottomLineLeftInset;
@property (nonatomic) double fBottomLineRightInset;
@property (nonatomic) BOOL bDrawNoSeparator;
@property (nonatomic) BOOL bDrawSeparatorBetweenCells;
@property (retain, nonatomic) id userInfo;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *cells;

+ (id)defaultSection;
+ (id)sectionWithHeader:(id)a0;
+ (id)sectionWithFooter:(id)a0;
+ (id)sectionWithHeader:(id)a0 Footer:(id)a1;
+ (id)sectionWithHeaderView:(id)a0;
+ (id)sectionWithFooterView:(id)a0;
+ (id)sectionWithHeaderView:(id)a0 FooterView:(id)a1;
+ (id)sectionInfoDefaut;
+ (id)sectionInfoHeader:(id)a0;
+ (id)sectionInfoFooter:(id)a0;
+ (id)sectionInfoHeader:(id)a0 Footer:(id)a1;
+ (id)sectionInfoHeaderWithView:(id)a0;
+ (id)sectionInfoFooterWithView:(id)a0;

- (id)init;
- (void)addCell:(id)a0;
- (void)didBeClickedAt:(id)a0;
- (id)makeViewWith:(id)a0 attributedTitle:(id)a1 tailText:(id)a2 topPading:(double)a3 bottomPadding:(double)a4;
- (id)getHeaderView;
- (id)getFooterView;
- (void)insertCell:(id)a0 At:(unsigned int)a1;
- (unsigned long long)getCellCount;
- (id)getAllCells;
- (id)getCellAt:(unsigned long long)a0;
- (void)removeCellAt:(unsigned long long)a0;
- (void).cxx_destruct;

@end
