@interface AWEMerchandiseComponentCellTitle : AWEMerchandiseComponentBaseCell

@property (nonatomic) BOOL showCloseButton;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (nonatomic) double closeButtonShowProgress;

+ (id)textFontWithModel:(id)a0 filterManager:(id)a1;
+ (double)titleWidthWithModel:(id)a0 filterManager:(id)a1;
+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
