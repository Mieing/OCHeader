@protocol BrandProfileFuwuBaseViewDelegate;

@interface BrandProfileFuwuBaseView : MMUIView

@property (weak, nonatomic) id<BrandProfileFuwuBaseViewDelegate> delegate;
@property (nonatomic) BOOL shouldHideTopDividingLine;

- (void)updateFuwuInfo:(id)a0;
- (double)calcuteFuwuViewHeight;
- (void).cxx_destruct;

@end
