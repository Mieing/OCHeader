@class NSString, NSArray;
@protocol CJPayVoucherMsgDisplayOption, CJPayVoucherMsgContent;

@interface CJPayToastMsgInfo : JSONModel

@property (copy, nonatomic) NSString *toastStyle;
@property (copy, nonatomic) NSArray<CJPayVoucherMsgContent> *toastContent;
@property (copy, nonatomic) NSArray<CJPayVoucherMsgDisplayOption> *toastDisplayOption;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
