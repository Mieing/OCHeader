@class NSString, AWELiveUploadMediaAuthInfoModel, NSArray;

@interface AWELiveUploadMediaParamModel : IESLiveBridgeModel

@property (retain, nonatomic) AWELiveUploadMediaAuthInfoModel *authInfo;
@property (copy, nonatomic) NSString *uploadServerPath;
@property (nonatomic) long long fileType;
@property (copy, nonatomic) NSArray *filePathList;
@property (copy, nonatomic) NSString *videoUploadExtra;
@property (nonatomic) BOOL useUploaderV2;
@property (nonatomic) BOOL needEncrypt;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
