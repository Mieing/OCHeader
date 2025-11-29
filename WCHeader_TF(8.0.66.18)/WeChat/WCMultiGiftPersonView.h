@class NSArray, NSString, WCGiftCardData, MMTableView;

@interface WCMultiGiftPersonView : MMUIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *giftTableView;
@property (retain, nonatomic) NSArray *accepterList;
@property (nonatomic) double maxWidth;
@property (nonatomic) double minHeight;
@property (retain, nonatomic) WCGiftCardData *giftCardData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configTableSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createTableViewHeaderView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
