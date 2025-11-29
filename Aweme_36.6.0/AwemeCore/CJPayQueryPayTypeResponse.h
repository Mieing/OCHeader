@class CJPayIntegratedChannelModel;

@interface CJPayQueryPayTypeResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayIntegratedChannelModel *tradeInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
