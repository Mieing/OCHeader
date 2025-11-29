@class NSString, UIImageView, AWEAwemeModel, UILabel, UITapGestureRecognizer;

@interface AWEFeedBottomBarAdActivityView : UIView <AWEFeedCommerceBottomTipProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)jumpAction;
- (void)trackAdBottomBarEventWithLabel:(id)a0;
- (void)configureWithModel:(id)a0 referString:(id)a1;
- (void)trackRelatedSearchShowIfNeeded;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)bgColor;

@end
