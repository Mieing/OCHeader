@class NSArray, NSString, AWEMusicModel, AWEDynamicPatchModel;
@protocol AWEStudioMusicModelProtocol, AWEStudioDynamicPathModelProtocol;

@interface AWESearchMusicModel : AWEBaseApiModel <AWEStudioSearchMusicModelProtocol>

@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> musicModel;
@property (copy, nonatomic) NSArray *musics;
@property (retain, nonatomic) id<AWEStudioDynamicPathModelProtocol> dynamicPatch;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) AWEMusicModel *musicModel;
@property (copy, nonatomic) NSArray *musics;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatch;

+ (id)hasMoreJSONTransformer;
+ (id)musicsJSONTransformer;
+ (id)musicModelJSONTransformer;
+ (id)dynamicPatchJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
