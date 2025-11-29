@class NSString;

@interface GCChannelTitleModel : GCBaseCellModel

@property (retain, nonatomic) NSString *titleName;
@property (nonatomic) unsigned long long nubmerCnt;

- (Class)bindCellClass;
- (struct CGSize { double x0; double x1; })cellSizeForCollectionView:(id)a0;
- (id)numberTitle;
- (void).cxx_destruct;

@end
