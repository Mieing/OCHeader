@class NSString;

@interface AWEChallengeDownloadInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *downloadURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
