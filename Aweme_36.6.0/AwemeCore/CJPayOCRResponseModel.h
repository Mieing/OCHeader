@class NSString, CJPayOCRUploadResponseModel;

@interface CJPayOCRResponseModel : JSONModel

@property (copy, nonatomic) NSString *code;
@property (retain, nonatomic) CJPayOCRUploadResponseModel *data;

- (void).cxx_destruct;

@end
