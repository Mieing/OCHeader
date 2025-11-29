@class IESLiveCgQueryEnjoyCardInfoEnjoyCardInfoModel;

@interface IESLiveCgQueryEnjoyCardInfoDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL result;
@property (retain, nonatomic) IESLiveCgQueryEnjoyCardInfoEnjoyCardInfoModel *enjoyCardInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
