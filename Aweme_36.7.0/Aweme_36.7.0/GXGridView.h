@class NSString;

@interface GXGridView : UICollectionView <GXRootViewProtocal>

@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)onDisappear;
- (void)onAppear;

@end
