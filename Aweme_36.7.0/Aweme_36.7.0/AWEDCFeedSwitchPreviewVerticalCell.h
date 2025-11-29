@class NSString;

@interface AWEDCFeedSwitchPreviewVerticalCell : UICollectionViewCell

@property (class, readonly, nonatomic) NSString *reuseIdentifier;

@property (nonatomic) long long cellType;

- (void)configWithCellType:(long long)a0 selected:(BOOL)a1;
- (void)prepareForReuse;

@end
