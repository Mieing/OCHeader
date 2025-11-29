@class NSString;

@interface AWEECEcUploadFileResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) id data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
