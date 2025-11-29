@class NSString;

@interface AWELiveUploadMediaVideoResultListV2Model : IESLiveBridgeModel

@property (copy, nonatomic) NSString *originVid;
@property (copy, nonatomic) NSString *videoInfo;
@property (copy, nonatomic) NSString *encryptionMeta;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
