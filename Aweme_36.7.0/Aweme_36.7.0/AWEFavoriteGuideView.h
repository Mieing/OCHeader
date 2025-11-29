@class NSString, UIButton;

@interface AWEFavoriteGuideView : BDPRevisitEducationView <BDPHostGameFavoritesViewProtocol>

@property (copy, nonatomic) NSString *descString;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) id /* block */ cancelFavoriteAction;
@property (copy, nonatomic) id /* block */ gotItAction;
@property (copy, nonatomic) id /* block */ showOnAction;
@property (retain, nonatomic) UIButton *cancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCloseButton;
- (void)setupAction;
- (void)showOn:(id)a0;
- (void)clickCancelFavoriteButton;
- (void)setCancelFavoriteBlock:(id /* block */)a0;
- (void)setShowOnBlock:(id /* block */)a0;
- (void)setGotItBlock:(id /* block */)a0;
- (void)appendCancelFavoriteBlock:(id /* block */)a0;
- (void)appendCloseBlock:(id /* block */)a0;
- (void)appendGotItBlock:(id /* block */)a0;
- (void)appendShowOnBlock:(id /* block */)a0;
- (void)changeUI;
- (void)clickGotItButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 titleString:(id)a1 descString:(id)a2 imageURL:(id)a3;
- (void)setCloseBlock:(id /* block */)a0;
- (void)close;
- (void).cxx_destruct;

@end
