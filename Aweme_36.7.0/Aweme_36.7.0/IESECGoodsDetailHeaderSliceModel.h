@class NSString, NSDictionary, IESECSliceAction, IESECSliceSlice;

@interface IESECGoodsDetailHeaderSliceModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *sliceID;
@property (copy, nonatomic) NSDictionary *sliceTemplate;
@property (copy, nonatomic) NSDictionary *sliceTemplateData;
@property (retain, nonatomic) IESECSliceAction *headerShowAction;
@property (retain, nonatomic) IESECSliceSlice *slice;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
