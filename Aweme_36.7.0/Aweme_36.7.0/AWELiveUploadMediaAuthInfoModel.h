@class NSString;

@interface AWELiveUploadMediaAuthInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *ak;
@property (copy, nonatomic) NSString *sk;
@property (copy, nonatomic) NSString *st;
@property (copy, nonatomic) NSString *spaceName;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
