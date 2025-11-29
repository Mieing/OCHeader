@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLivePKMultiBrawlEntranceCell : UITableViewCell <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *multiBrawlInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
