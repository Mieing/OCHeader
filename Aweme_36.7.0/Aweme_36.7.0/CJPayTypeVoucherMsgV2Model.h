@class NSArray;
@protocol CJPayStandardTagModel;

@interface CJPayTypeVoucherMsgV2Model : JSONModel

@property (copy, nonatomic) NSArray *tag12;
@property (copy, nonatomic) NSArray *tag34;
@property (copy, nonatomic) NSArray *tag56;
@property (copy, nonatomic) NSArray<CJPayStandardTagModel> *tag56Model;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)cardListVoucherMsgArrayWithType:(unsigned long long)a0;
- (id)cardListVoucherMsgArrayWithPromotionScene:(id)a0;
- (id)standardVoucherListWithPromotionScene:(id)a0;
- (unsigned long long)p_voucherTagType:(id)a0;
- (id)p_voucherText:(id)a0;
- (void).cxx_destruct;

@end
