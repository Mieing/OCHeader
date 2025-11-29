@class WCFinderTLRegardfulAuthorScrollView, UIView, NSString, UIScrollView, UILabel, NSMutableArray;

@interface WCFinderTLRegardfulAuthorView : UIView <UIScrollViewDelegate>

@property (weak, nonatomic) UIScrollView *contentView;
@property (weak, nonatomic) UILabel *titleLabelView;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) WCFinderTLRegardfulAuthorScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *cellViewArray;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (weak, nonatomic) UIView *showView;
@property (nonatomic) BOOL showProfile;
@property (nonatomic) BOOL reorder;
@property (nonatomic) BOOL isDismissing;
@property (readonly, nonatomic) BOOL isShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (id)initWithShowView:(id)a0 showBlock:(id /* block */)a1 dismissBlock:(id /* block */)a2;
- (void)panAction;
- (void)dismissAuthorView;
- (void)show;
- (void)reloadOftenReadBar:(id)a0;
- (void)reloadData:(id)a0;
- (void)reloadSort;
- (void)setUpUI;
- (void)_reloadData;
- (void)setItemViewAlpha:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)clickContactCell:(id)a0;
- (void)reportLiveCardExposeIfNeeded:(id)a0;
- (id)getAllLiveContentVMArray;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
