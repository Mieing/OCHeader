@class NSArray, UIImageView, NSAttributedString, UIButton;

@interface IESLiveGuideAlertView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) NSArray *imageURLs;
@property (retain, nonatomic) NSAttributedString *actionTitle;
@property (retain, nonatomic) NSAttributedString *detailTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ detailBlock;
@property (copy, nonatomic) id /* block */ closeCallback;

- (void)tapClose:(id)a0;
- (void)tapDetail:(id)a0;
- (id)initWithImageURLs:(id)a0 actionTitle:(id)a1 detailTitle:(id)a2 actionBlock:(id /* block */)a3 detailBlock:(id /* block */)a4 closeCallback:(id /* block */)a5;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadData;
- (void)setupUI;
- (void)tapAction:(id)a0;

@end
