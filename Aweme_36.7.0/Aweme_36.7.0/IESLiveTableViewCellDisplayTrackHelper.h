@class NSMutableDictionary, UITableView;
@protocol IESLiveTableViewCellDisplayTrackHelperDelegate;

@interface IESLiveTableViewCellDisplayTrackHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *trackRecord;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleArea;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<IESLiveTableViewCellDisplayTrackHelperDelegate> delegate;

- (void)clearTrackRecord;
- (void)trackAllDisplayedCell;
- (id)initWithTableView:(id)a0 delegate:(id)a1;
- (void)clearTrackRecordWithIdentifier:(id)a0 sectionId:(long long)a1;
- (void)trackAllDisplayedCellWithIdentifier:(id)a0;
- (void)clearTrackRecordWithIdentifier:(id)a0;
- (id)initWithTableView:(id)a0 delegate:(id)a1 visibleArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)trackDisplayedCell:(id)a0 identifier:(id)a1;
- (id)indexPathToString:(id)a0;
- (void).cxx_destruct;

@end
