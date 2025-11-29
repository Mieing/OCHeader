@class NSString;

@interface CJPayStandardTagLabelModel : JSONModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *typeStr;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } textSize;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)keyMapperDict;

- (BOOL)currentLabelIsValid;
- (void).cxx_destruct;

@end
