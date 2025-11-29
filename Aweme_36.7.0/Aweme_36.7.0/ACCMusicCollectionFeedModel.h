@class NSArray, NSString, ACCVideoMusicCategoryModel;

@interface ACCMusicCollectionFeedModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) ACCVideoMusicCategoryModel *category;
@property (retain, nonatomic) NSArray *musicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicListJSONTransformer;
+ (id)categoryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
