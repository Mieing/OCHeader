@class NSString, NSMutableArray, IESECPDPSlideViewGoodsModel;

@interface IESECPDPContainerSlideViewDataSource : NSObject <UICollectionViewDataSource, IESECPDPContainerSlideViewCellDelegate>

@property (retain, nonatomic) NSMutableArray *modelArray;
@property (retain, nonatomic) IESECPDPSlideViewGoodsModel *selectedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
