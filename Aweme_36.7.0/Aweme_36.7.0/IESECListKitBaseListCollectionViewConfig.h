@interface IESECListKitBaseListCollectionViewConfig : NSObject

@property (retain, nonatomic) Class collectionViewClass;
@property (nonatomic) BOOL enableStickHeader;
@property (nonatomic) BOOL enableStickCollectionView;
@property (nonatomic) BOOL enableInteractiveMovement;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
