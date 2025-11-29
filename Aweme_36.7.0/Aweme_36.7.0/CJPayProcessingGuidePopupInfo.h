@class NSString;

@interface CJPayProcessingGuidePopupInfo : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *btnText;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
