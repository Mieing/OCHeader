@class NSString;

@interface IESGCPGetXPlayDownloadInfoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *downloadPage;
@property (copy, nonatomic) NSString *cloudGameId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
