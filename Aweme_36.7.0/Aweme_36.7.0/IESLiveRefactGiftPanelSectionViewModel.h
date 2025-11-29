@class NSString;
@protocol IESLiveCollectionViewItemProtocol;

@interface IESLiveRefactGiftPanelSectionViewModel : NSObject <IESLiveRefactGiftPanelSectionVMProtocol>

@property (nonatomic) struct CGSize { double width; double height; } layoutViewSize;
@property (copy, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) Class viewClass;
@property (nonatomic) BOOL useOldCellToSetItem;
@property (weak, nonatomic) id<IESLiveCollectionViewItemProtocol> oldItem;
@property (copy, nonatomic) id /* block */ willAppearSectionViewBlock;
@property (copy, nonatomic) id /* block */ didAppearSectionViewBlock;
@property (copy, nonatomic) id /* block */ willDisappearSectionViewBlock;
@property (copy, nonatomic) id /* block */ didDisappearSectionViewBlock;
@property (copy, nonatomic) id /* block */ shouldShowSectionViewBlock;
@property (copy, nonatomic) id /* block */ sectionDidUpdatedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createSectionView;
- (void).cxx_destruct;
- (id)init;

@end
