@class NSString, NSDictionary;

@interface CJPayUploadIDPhotoResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *flowNo;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *hitPsProcess;
@property (nonatomic) BOOL needDoubleVerify;
@property (copy, nonatomic) NSDictionary *passportOcrInfo;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
