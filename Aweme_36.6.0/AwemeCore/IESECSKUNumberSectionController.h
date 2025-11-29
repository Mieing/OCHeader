@class NSString, IESECSKUNumberViewModel;

@interface IESECSKUNumberSectionController : IGListSectionController <IESECSKUNumberCellDelegate>

@property (retain, nonatomic) IESECSKUNumberViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (void)didUpdateToObject:(id)a0;
- (void)minusTapped;
- (void)plusTapped;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
