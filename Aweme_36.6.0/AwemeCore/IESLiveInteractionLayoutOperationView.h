@class NSString, UIImageView, UILabel, UIButton;

@interface IESLiveInteractionLayoutOperationView : UIView <IESLiveInteractiveViewAboveListView>

@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })btd_hitTestEdgeInsets;
- (void)updateWithLayout:(unsigned long long)a0;
- (void)updatePaidLinkMicText:(BOOL)a0;
- (void)updateWithListCount:(int)a0;
- (void)setupWithLayout:(unsigned long long)a0;
- (void)onLayoutOperation:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)setupViews;

@end
