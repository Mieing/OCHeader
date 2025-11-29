@class AWEPOIVideoDarenCardModel, NSDictionary, UIImageView, UIVisualEffectView, UIView, UILabel, UIButton;
@protocol AWEPOIVideoDarenCardViewDelegate;

@interface AWEPOIVideoDarenCardView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *openButton;
@property (retain, nonatomic) AWEPOIVideoDarenCardModel *cardModel;
@property (retain, nonatomic) NSDictionary *logParams;
@property (weak, nonatomic) id<AWEPOIVideoDarenCardViewDelegate> delegate;

- (void)viewController_viewWillAppear;
- (void)openSchema;
- (void)viewDidDisposed;
- (void)viewWillDisplay;
- (void)updateWithAwemeModel:(id)a0 logParams:(id)a1;
- (void)closeCard;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
