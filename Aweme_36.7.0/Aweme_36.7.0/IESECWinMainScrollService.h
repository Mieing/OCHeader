@class NSString, IGListAdapter, UICollectionView;

@interface IESECWinMainScrollService : IESECContextService <IESECWinMainScrollService>

@property (nonatomic) double startOffset;
@property (nonatomic) double offsetY;
@property (nonatomic) long long scrollStatus;
@property (nonatomic) double listOffsetY;
@property (copy, nonatomic) id /* block */ scrollToTopBlock;
@property (copy, nonatomic) id /* block */ scrollToLiveBlock;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) IGListAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
