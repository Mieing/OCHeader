@class NSString, NSDictionary, UIView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol;

@interface AWEPlayletSkyLightAnnieXCardView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *containerView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) double initTimeInterval;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *skylightBusinessParams;
@property (retain, nonatomic) NSDictionary *lynxDataDic;
@property (copy, nonatomic) id /* block */ cardHeightDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)onShow;
- (id)initWithEnterFrom:(id)a0;
- (void)collectAnniexCardOpenTime;
- (void)updateInsertData:(id)a0;
- (void)updateAnnieXCardScreenSize:(struct CGSize { double x0; double x1; })a0;
- (id)cardContainerID;
- (void)onHide;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
