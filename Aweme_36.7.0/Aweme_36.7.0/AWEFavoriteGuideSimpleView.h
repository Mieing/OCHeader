@class NSString;

@interface AWEFavoriteGuideSimpleView : UIView <BDPHostGameFavoritesViewProtocol>

@property (copy, nonatomic) id /* block */ cancelFavoriteAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ showOnAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOn:(id)a0;
- (void)clickCancelFavoriteButton;
- (void)setCancelFavoriteBlock:(id /* block */)a0;
- (void)setShowOnBlock:(id /* block */)a0;
- (void)setGotItBlock:(id /* block */)a0;
- (void)appendCancelFavoriteBlock:(id /* block */)a0;
- (void)appendCloseBlock:(id /* block */)a0;
- (void)appendGotItBlock:(id /* block */)a0;
- (void)appendShowOnBlock:(id /* block */)a0;
- (void)setCloseBlock:(id /* block */)a0;
- (void)close;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
