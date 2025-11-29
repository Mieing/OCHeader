@class NSString, UIView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol, AWESearchSugLynxTableViewCellDelegate;

@interface AWESearchSugLynxTableViewCell : UITableViewCell <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *cardView;
@property (nonatomic) BOOL isTemplateLoadSuccess;
@property (nonatomic) BOOL needReloadTemplate;
@property (weak, nonatomic) id<AWESearchSugLynxTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
