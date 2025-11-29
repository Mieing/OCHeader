@class NSString, UIImageView, UILabel, UIButton;

@interface IESECEmptyViewDouyin : UIView <IESECEmptyViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *refreshButton;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyViewWithRefreshBlock:(id /* block */)a0;

- (void)hideErrorView;
- (void)refreshButtonTapped;
- (id)initWithRefreshBlock:(id /* block */)a0;
- (void)showErrorViewInContainer:(id)a0;
- (void).cxx_destruct;
- (void)setUpViews;

@end
