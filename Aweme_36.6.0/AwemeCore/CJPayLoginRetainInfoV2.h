@class CJPayVoucherRetainInfoModel;

@interface CJPayLoginRetainInfoV2 : JSONModel

@property (retain, nonatomic) CJPayVoucherRetainInfoModel *defaultRetainInfo;
@property (retain, nonatomic) CJPayVoucherRetainInfoModel *voucherRetainInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)basicDict;

- (void).cxx_destruct;

@end
