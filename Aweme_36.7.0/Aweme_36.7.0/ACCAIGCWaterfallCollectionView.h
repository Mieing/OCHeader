@class NSNumber;

@interface ACCAIGCWaterfallCollectionView : UICollectionView

@property (retain, nonatomic) NSNumber *deleteLoraModelSignal;
@property (nonatomic) long long currentColumnIndex;
@property (nonatomic) BOOL noNeedRequestProfile;
@property (retain, nonatomic) NSNumber *hadDeleteModel;

- (void).cxx_destruct;

@end
