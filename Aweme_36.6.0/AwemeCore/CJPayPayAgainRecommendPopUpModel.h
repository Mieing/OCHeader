@class NSArray, NSString, CJPayPayAgainTipsModel;
@protocol CJPayUIComponentTextModel;

@interface CJPayPayAgainRecommendPopUpModel : JSONModel

@property (copy, nonatomic) NSArray<CJPayUIComponentTextModel> *title;
@property (copy, nonatomic) NSArray<CJPayUIComponentTextModel> *subTitle;
@property (copy, nonatomic) NSString *activeButton;
@property (copy, nonatomic) NSString *negativeButton;
@property (retain, nonatomic) CJPayPayAgainTipsModel *tips;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
