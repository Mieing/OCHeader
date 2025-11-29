@class UIViewController, AWEBaseListSectionController;
@protocol AWEBaseListViewControllerProtocol;

@interface AWEBaseListCollectionViewLongPressHandler : NSObject

@property (weak, nonatomic) UIViewController<AWEBaseListViewControllerProtocol> *viewController;
@property (retain, nonatomic) AWEBaseListSectionController *interactiveSectionController;
@property (nonatomic) double movementMinY;
@property (nonatomic) double movementMaxY;

+ (id)handlerWithViewController:(id)a0;

- (BOOL)prepareForMovementWithIndexPath:(id)a0 collectionView:(id)a1;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
