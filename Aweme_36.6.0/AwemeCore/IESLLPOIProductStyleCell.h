@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface IESLLPOIProductStyleCell : UICollectionViewCell <IESLLPOIProductCellProtocol>

@property (retain, nonatomic) UIImageView *productImage;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (copy, nonatomic) id /* block */ contentTapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
