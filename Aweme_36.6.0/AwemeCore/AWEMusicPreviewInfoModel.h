@class AWEMusicURLModel, NSString;

@interface AWEMusicPreviewInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long start_ms;
@property (nonatomic) long long duration_ms;
@property (retain, nonatomic) AWEMusicURLModel *fullPlayURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fullPlayURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
