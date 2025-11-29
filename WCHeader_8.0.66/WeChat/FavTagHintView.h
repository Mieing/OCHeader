@class NSString, NSMutableArray;
@protocol FavTagEditViewDelegate;

@interface FavTagHintView : MMUIView <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<FavTagEditViewDelegate> m_delegate;
@property (retain, nonatomic) NSMutableArray *m_arrHints;
@property (retain, nonatomic) NSString *m_currentInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initData;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
