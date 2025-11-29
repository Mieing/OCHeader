@class NSString, AWEShareSpikeGoodsModel, AWEShareSpikeContainerView;

@interface AWEShareTokenNoteEcommerceSpikeView : AWEShareTokenNoteBaseCardView

@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEShareSpikeContainerView *containerView;
@property (retain, nonatomic) AWEShareSpikeGoodsModel *model;
@property (nonatomic) double firstInitTime;

- (void)setupUIWithModel:(id)a0;
- (id)initWithModel:(id)a0 withSpikeModel:(id)a1;
- (void)dismissButtonTapped;
- (void)actionButtonClick;
- (void)mainImageClick;
- (void)viewDidShow;
- (void)goToSpikeChannel;
- (void).cxx_destruct;

@end
