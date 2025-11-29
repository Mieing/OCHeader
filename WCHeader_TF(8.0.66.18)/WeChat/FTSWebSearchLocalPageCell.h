@class SugResult, NSString, NSMutableSet, UITableView;
@protocol WebSearchLocalPageCellDelegate;

@interface FTSWebSearchLocalPageCell : MMTableViewCell <UITableViewDataSource, UITableViewDelegate, IFtsWebSearchExt> {
    SugResult *_resultWrap;
    UITableView *_resultTableView;
    NSMutableSet *_exposeSet;
}

@property (weak, nonatomic) id<WebSearchLocalPageCellDelegate> delegate;
@property (nonatomic) unsigned long long localSearchId;
@property (nonatomic) BOOL enableCardStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GenHStackWith:(id)a0;
+ (double)heightForData:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithData:(id)a0;
- (void)layoutSubviews;
- (BOOL)useCardStyle;
- (double)horizonalMargin;
- (long long)historyCount;
- (long long)rowCount;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateVisibleYInSelfCoordinate:(double)a0;
- (void)resetExposeSet;
- (void)onPardusSearchResultReturn:(id)a0 request:(id)a1;
- (void).cxx_destruct;

@end
