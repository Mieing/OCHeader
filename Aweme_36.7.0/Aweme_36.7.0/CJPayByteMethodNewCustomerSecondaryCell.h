@class CJPayByteMethodNewCustomerSecondaryCollectionView, CJPayChannelBizModel, NSString;
@protocol CJPayMethodTableViewDelegate;

@interface CJPayByteMethodNewCustomerSecondaryCell : UITableViewCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) CJPayByteMethodNewCustomerSecondaryCollectionView *collectionView;
@property (retain, nonatomic) CJPayChannelBizModel *data;
@property (weak, nonatomic) id<CJPayMethodTableViewDelegate> subPayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;

@end
