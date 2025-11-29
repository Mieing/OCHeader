@class NSArray, NSString;

@interface AWEStudioAIGCResourceMapModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *videos;
@property (retain, nonatomic) NSArray *watermarkVideos;
@property (retain, nonatomic) NSArray *texts;
@property (retain, nonatomic) NSArray *watermarkImages;
@property (retain, nonatomic) NSArray *coverImages;
@property (retain, nonatomic) NSArray *livephotos;
@property (retain, nonatomic) NSArray *watermarkLivephotos;
@property (retain, nonatomic) NSArray *musics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicsJSONTransformer;
+ (id)videosJSONTransformer;
+ (id)textsJSONTransformer;
+ (id)livephotosJSONTransformer;
+ (id)coverImagesJSONTransformer;
+ (id)watermarkImagesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
