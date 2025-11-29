@class NSString, IESLiveGiftLongPressGroupContainerView, IESLiveGiftLongPressItem, UIScrollView, IESLiveGradientView, IESLiveGiftLongPressMostlyUsedContainerView;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftLongPressView : UIView <UIScrollViewDelegate, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) IESLiveGiftLongPressGroupContainerView *groupContainerView;
@property (retain, nonatomic) IESLiveGiftLongPressItem *item;
@property (retain, nonatomic) IESLiveGiftLongPressMostlyUsedContainerView *mostlyUsedContainerView;
@property (retain, nonatomic) IESLiveGradientView *groupSelectionLeadGradientView;
@property (retain, nonatomic) IESLiveGradientView *groupSelectionTrailGradientView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)didClickItem:(id)a0;
- (void)setupScrollViewContent;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })layoutViewSize;

@end
