@class UIImageView, NSString, UIView;
@protocol IESLiveCollectionViewItemProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftAnchorPanelView : UIView <IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

@end
