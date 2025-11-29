@class NSString, IESLiveGiftPanelLineItem, UIView;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftPanelLineView : UIView <IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) IESLiveGiftPanelLineItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
