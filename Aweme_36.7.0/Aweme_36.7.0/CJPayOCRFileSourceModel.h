@class NSString, CJPayOCRFileResponseModel;

@interface CJPayOCRFileSourceModel : JSONModel

@property (copy, nonatomic) NSString *code;
@property (retain, nonatomic) CJPayOCRFileResponseModel *data;

- (void).cxx_destruct;

@end
