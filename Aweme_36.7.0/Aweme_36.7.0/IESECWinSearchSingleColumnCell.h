@class NSString, IESECWinLivingProductObject, IESECLLView;
@protocol IESECWinFlexGoodsCellProtocol;

@interface IESECWinSearchSingleColumnCell : UICollectionViewCell <IESECRelationGoodsCardViewModelDelegate> {
    IESECWinLivingProductObject *_object;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (weak, nonatomic) id<IESECWinFlexGoodsCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)cellBuilderWithObject:(id)a0;

@end
