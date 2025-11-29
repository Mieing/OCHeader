@class NSString, IESECLLView;
@protocol AWEECCommodityLandingCollectButtonProtocol;

@interface AWEECCommodityLandingTitleCell : UICollectionViewCell <AWEECCommodityLandingCollectUpdaterProtocol> {
    IESECLLView *_containerView;
}

@property (weak, nonatomic) id<AWEECCommodityLandingCollectButtonProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCollectDescAndCategorySingleLineWithModel:(id)a0;
+ (double)cellHeightWithModel:(id)a0;

- (id /* block */)p_builderWithModel:(id)a0;
- (void)collectButtonClick:(id)a0;
- (void)updateWithHeaderModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
