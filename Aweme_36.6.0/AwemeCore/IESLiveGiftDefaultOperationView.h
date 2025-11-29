@class IESLiveGiftDefaultOperationItem, NSString, UILabel, UIButton;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftDefaultOperationView : UIView <IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UILabel *operationHintLabel;
@property (retain, nonatomic) UIButton *operationButton;
@property (retain, nonatomic) IESLiveGiftDefaultOperationItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)loadSubviews;
- (void)didOperationViewClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
