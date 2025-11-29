@class NSString, CJPayPreTradeTrackInfo;

@interface CJPayPreTradeInfo : JSONModel

@property (copy, nonatomic) NSString *bankCardID;
@property (copy, nonatomic) NSString *cardNoMask;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *exts;
@property (retain, nonatomic) CJPayPreTradeTrackInfo *trackInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
