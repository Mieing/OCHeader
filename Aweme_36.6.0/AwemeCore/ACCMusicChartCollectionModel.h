@class ACCVideoMusicCategoryModel, NSArray, NSString, AWEURLModel;

@interface ACCMusicChartCollectionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) ACCVideoMusicCategoryModel *category;
@property (retain, nonatomic) NSArray *musicList;
@property (nonatomic) long long backgroundColor;
@property (nonatomic) long long numberColor;
@property (retain, nonatomic) AWEURLModel *headCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicListJSONTransformer;
+ (id)categoryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
