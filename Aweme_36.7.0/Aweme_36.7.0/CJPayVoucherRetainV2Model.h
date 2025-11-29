@class CJPayVoucherRetainInfoModel, NSString;

@interface CJPayVoucherRetainV2Model : JSONModel

@property (retain, nonatomic) CJPayVoucherRetainInfoModel *voucherRetainInfo;
@property (retain, nonatomic) CJPayVoucherRetainInfoModel *defaultRetainInfo;
@property (copy, nonatomic) NSString *lynxSchema;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
