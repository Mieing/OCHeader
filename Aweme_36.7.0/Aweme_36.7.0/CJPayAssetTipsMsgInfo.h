@class NSString, NSArray;
@protocol CJPayUIComponentTextModel;

@interface CJPayAssetTipsMsgInfo : JSONModel

@property (copy, nonatomic) NSString *tipsMsg;
@property (copy, nonatomic) NSString *tipsType;
@property (copy, nonatomic) NSString *payment;
@property (copy, nonatomic) NSString *displayOption;
@property (copy, nonatomic) NSString *tipsSubType;
@property (copy, nonatomic) NSString *tipsFunctionType;
@property (copy, nonatomic) NSArray<CJPayUIComponentTextModel> *tipsInfoList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
