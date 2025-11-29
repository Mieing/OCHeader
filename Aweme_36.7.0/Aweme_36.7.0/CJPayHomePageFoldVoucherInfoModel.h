@class NSString, NSArray;

@interface CJPayHomePageFoldVoucherInfoModel : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSArray *voucherDescList;
@property (copy, nonatomic) NSArray *retainVoucherDescList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
