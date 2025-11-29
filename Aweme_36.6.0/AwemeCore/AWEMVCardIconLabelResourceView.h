@class UIStackView, NSString, UIImageView, AWEBinding, UILabel, AWEAwemeModel;

@interface AWEMVCardIconLabelResourceView : UIView <AWEDCFeedCellImageElementResourceViewProtocol>

@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UILabel *likeLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) AWEBinding *diggTitleObserver;
@property (retain, nonatomic) AWEBinding *diggIconObserver;
@property (nonatomic) double prevIconViewWidth;
@property (nonatomic) double prevContainerHeight;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configResourceWithAwemeModel:(id)a0 context:(id)a1;
- (void)updateUIWithModel:(id)a0;
- (void)addDiggObserver;
- (void)configLikeLabelTextWithStr:(id)a0;
- (void)updateDiggImageWithAwemeModel:(id)a0;
- (void)hideLayerShadow:(id)a0;
- (void)addAdditionalShadowForTextAndIconToLayer:(id)a0;
- (id)imageLeftBottomUIConfigModel;
- (id)container;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateShadow;

@end
