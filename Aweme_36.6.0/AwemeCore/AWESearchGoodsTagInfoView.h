@class AWESearchGoodsTagInfoConfiguration;

@interface AWESearchGoodsTagInfoView : UIView

@property (retain, nonatomic) AWESearchGoodsTagInfoConfiguration *config;

+ (struct CGSize { double x0; double x1; })sizeForTagInfos:(id)a0 config:(id /* block */)a1;

- (id)initWithTagInfos:(id)a0 config:(id /* block */)a1 completion:(id /* block */)a2;
- (void)downloadTagWithTagInfos:(id)a0 completion:(id /* block */)a1;
- (id)initWithTagInfos:(id)a0 config:(id /* block */)a1;
- (void).cxx_destruct;

@end
