@class NSArray;

@interface IESLiveTableViewSectionController : NSObject

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) Class cellClass;

- (double)cellHeightAtIndex:(long long)a0;
- (void)didSelectCell:(id)a0 atIndex:(long long)a1;
- (id)cellForTableView:(id)a0 atIndex:(long long)a1;
- (void)willDisplyCell:(id)a0 atIndex:(long long)a1;
- (id)headerForTableView:(id)a0;
- (id)footerForTableView:(id)a0;
- (void)endDisplayCell:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (double)heightForHeader;
- (double)heightForFooter;

@end
