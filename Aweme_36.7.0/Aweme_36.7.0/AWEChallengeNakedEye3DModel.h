@class NSString, AWEURLModel;

@interface AWEChallengeNakedEye3DModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *backgroundVideo;
@property (retain, nonatomic) AWEURLModel *backgroundCoverImage;
@property (retain, nonatomic) AWEURLModel *foregroundAnim;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *complianceData;
@property (nonatomic) long long gestureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundVideoJSONTransformer;
+ (id)backgroundCoverImageJSONTransformer;
+ (id)foregroundAnimJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
