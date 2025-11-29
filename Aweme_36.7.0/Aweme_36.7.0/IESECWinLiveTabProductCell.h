@class NSString, IESECWinLivingProductObject, IESECLLView;
@protocol IESECWinFlexLivingProductCellDelegate;

@interface IESECWinLiveTabProductCell : IESECWinListKitNativeCell <IESECRelationGoodsCardViewModelDelegate> {
    IESECWinLivingProductObject *_object;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (retain, nonatomic) id<IESECWinFlexLivingProductCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)cellBuilderWithObject:(id)a0;

- (void)bindObject:(id)a0;
- (void)clickReplayButtonView;
- (void)clickGoodsCoverTagViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
