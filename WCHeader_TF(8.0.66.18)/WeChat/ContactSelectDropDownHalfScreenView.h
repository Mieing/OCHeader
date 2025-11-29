@class NSString, NSMutableDictionary, MMUIView, NSArray, MMTableView;
@protocol ContactSelectDropDownHalfScreenViewDelegate;

@interface ContactSelectDropDownHalfScreenView : MMDropDownHalfScreenExpandView <UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
    MMUIView *m_contentView;
    NSMutableDictionary *m_dicMultiSelect;
    NSArray *m_arrAllContact;
}

@property (weak, nonatomic) id<ContactSelectDropDownHalfScreenViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 navigationBarHeight:(double)a1;
- (void)setArrAllSelectContact:(id)a0;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTableView;
- (void)showHalfScreenExpandViewWithAnimated:(BOOL)a0;
- (void)hideHalfScreenExpandViewWithAnimated:(BOOL)a0;
- (BOOL)isSelected:(id)a0;
- (id)getContactWithIndexPath:(id)a0;
- (double)getMixedViewHeight;
- (double)getDetailViewAnimateInitTop;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 contact:(id)a1 tableView:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
