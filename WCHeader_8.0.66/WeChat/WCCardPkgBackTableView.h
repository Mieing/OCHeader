@protocol WCCardPkgBackTableViewDelegate;

@interface WCCardPkgBackTableView : MMTableView

@property (nonatomic) double maxHeight;
@property (weak, nonatomic) id<WCCardPkgBackTableViewDelegate> wx_delegate;

- (void)reloadData;
- (void)updateLayout;
- (void).cxx_destruct;

@end
