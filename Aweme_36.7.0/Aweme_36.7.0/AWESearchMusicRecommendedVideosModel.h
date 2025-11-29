@class NSString, NSArray, AWESearchMusicRecommendedVideosControlModel;

@interface AWESearchMusicRecommendedVideosModel : AWEBaseApiModel <ACCSearchMusicRecommendedVideosModelProtocol>

@property (copy, nonatomic) NSString *aladdinSource;
@property (copy, nonatomic) NSString *docID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *videoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *aladdinSource;
@property (copy, nonatomic) NSString *docID;
@property (retain, nonatomic) AWESearchMusicRecommendedVideosControlModel *playStatus;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *videoList;

+ (id)docIDJSONTransformer;
+ (id)playStatusJSONTransformer;
+ (id)videoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
