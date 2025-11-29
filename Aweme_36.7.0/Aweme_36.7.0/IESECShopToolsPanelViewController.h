@class NSString, IESECServiceProxy, IESECLynxCard, UIView, IESECShopToolsModel, NSDictionary;
@protocol IESECShopLayoutService, IESECShopForwardCoService, IESECShopToolsPanelDelegate, IESECShopPageContextV2;

@interface IESECShopToolsPanelViewController : UIViewController <IESECShopToolsEntryDelegate, IESECLynxCardDelegate> {
    id<IESECShopPageContextV2> _context;
    IESECShopToolsModel *_model;
    NSDictionary *_metaInfo;
}

@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) IESECLynxCard *lynxCard;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (weak, nonatomic) id<IESECShopToolsPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)showOnVC:(id)a0;
- (void)didTapEntry:(id)a0;
- (void)trackEntryEvent:(id)a0 isShow:(BOOL)a1;
- (id)initWithContext:(id)a0 model:(id)a1 metaInfo:(id)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupViews;
- (void)handleTap:(id)a0;

@end
