@class NSString;

@interface WCFinderOrderShareCellViewModel : CommonMessageViewModel

@property (readonly, copy, nonatomic) NSString *priceWording;
@property (readonly, copy, nonatomic) NSString *stateWording;
@property (readonly, copy, nonatomic) NSString *productImageURL;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)titleFont;
+ (id)tagFont;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)productsWordingForWidth:(double)a0 font:(id)a1;
- (struct CGSize { double x0; double x1; })defaultContentViewSize;
- (double)estimateWidth;
- (id)item;

@end
