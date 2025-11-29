@interface AWEMVPadSkeletonSmallCardSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) long long minimumLineSpacing;
@property (nonatomic) long long minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (nonatomic) BOOL enablePadSkeletonCell;

@end
