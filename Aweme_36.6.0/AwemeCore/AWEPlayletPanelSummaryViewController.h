@class NSString, AWEPlayletInfoModel, UIView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol;

@interface AWEPlayletPanelSummaryViewController : UIViewController <BDXContainerLifecycleProtocol>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEPlayletInfoModel *playletInfo;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *cardView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
