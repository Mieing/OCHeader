@class NSString, NSArray;
@protocol CJPayStandardTagLabelModel;

@interface CJPayStandardTagModel : JSONModel

@property (nonatomic) long long eventType;
@property (nonatomic) long long styleType;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (copy, nonatomic) NSString *eventTypeStr;
@property (copy, nonatomic) NSString *styleTypeStr;
@property (copy, nonatomic) NSString *tagBorderColor;
@property (copy, nonatomic) NSString *tagSeparateColor;
@property (copy, nonatomic) NSString *tagFillColor;
@property (copy, nonatomic) NSString *tagTextColor;
@property (retain, nonatomic) NSArray<CJPayStandardTagLabelModel> *label;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)keyMapperDict;

- (struct CGSize { double x0; double x1; })calculateTagItemSizeWithTagSizeType:(long long)a0;
- (BOOL)currentTagValid;
- (BOOL)currentTagIsMatchingWithTagSizeType:(long long)a0;
- (Class)getTagItemClassName;
- (void)filterNotValidLabel;
- (double)p_calculateTagLabelWidthPreLabelModel:(id)a0 currentLabelModel:(id)a1 styleType:(long long)a2 tagSizeType:(long long)a3 currentLabelIndex:(long long)a4 totalLabelCount:(long long)a5;
- (double)getTextWidthWithTitle:(id)a0 needSize:(struct CGSize { double x0; double x1; })a1 font:(id)a2;
- (double)sizeForImage:(id)a0 totalHeight:(double)a1;
- (void).cxx_destruct;

@end
