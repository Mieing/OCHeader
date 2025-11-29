@class NSString;

@interface CJPayCardOCRResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *cardNoStr;
@property (copy, nonatomic) NSString *croppedImgStr;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
