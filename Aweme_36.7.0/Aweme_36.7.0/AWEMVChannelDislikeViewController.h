@class NSString;

@interface AWEMVChannelDislikeViewController : AWEDoubleColumnDislikeViewController <AWEMVChannelDislikeViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionTypeString:(long long)a0;

- (void)addNotification;
- (void)dismiss;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (Class)collectionViewCellClass;
- (Class)headerClass;

@end
