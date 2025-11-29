@class NSString, NSAttributedString, AWEBinding;

@interface IESIMContactPickerCellLabelComponent : IESIMContactPickerCellComponentBase

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long numberOfLines;
@property (retain, nonatomic) AWEBinding *textBinding;
@property (retain, nonatomic) AWEBinding *attributedTextBinding;

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void)didEndDisplay;
- (BOOL)canShowComponentView;
- (void)updateAttributedTextText:(id)a0;
- (void).cxx_destruct;
- (void)updateText:(id)a0;
- (void)updateData;
- (id)createView;

@end
