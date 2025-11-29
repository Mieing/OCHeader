@class NSString, CJPaySubPayTypeInfoModel;

@interface CJPayZoneSplitInfoModel : JSONModel

@property (nonatomic) long long zoneIndex;
@property (copy, nonatomic) NSString *zoneTitle;
@property (copy, nonatomic) NSString *combineZoneTitle;
@property (retain, nonatomic) CJPaySubPayTypeInfoModel *otherCardInfo;
@property (nonatomic) BOOL isShowCombineTitle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
