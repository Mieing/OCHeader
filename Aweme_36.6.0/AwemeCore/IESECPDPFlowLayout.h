@class NSMutableDictionary;

@interface IESECPDPFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableDictionary *layoutAttributes;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;

@end
