@class NSString, AnnieScanCodeDataModel;

@interface AnnieScanCodeResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) AnnieScanCodeDataModel *data;

- (void).cxx_destruct;

@end
