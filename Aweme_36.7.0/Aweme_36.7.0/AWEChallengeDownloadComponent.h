@class NSString, AWEChallengeDownloadInfoModel;

@interface AWEChallengeDownloadComponent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) AWEChallengeDownloadInfoModel *downloadInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
