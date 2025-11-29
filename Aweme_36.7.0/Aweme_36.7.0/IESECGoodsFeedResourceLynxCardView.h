@class NSString, IESECLynxCard, IESECLynxCardModel, IESECGoodsFeedLynxResourceCellViewModel;

@interface IESECGoodsFeedResourceLynxCardView : IESECGoodsFeedBaseCell <IESECLynxCardDelegate>

@property (retain, nonatomic) IESECLynxCard *lynxCard;
@property (retain, nonatomic) IESECLynxCardModel *lynxCardModel;
@property (retain, nonatomic) IESECGoodsFeedLynxResourceCellViewModel *vm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)lynxCard:(id)a0 didFinishLoadWithURL:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)updateWithViewModel:(id)a0;

@end
