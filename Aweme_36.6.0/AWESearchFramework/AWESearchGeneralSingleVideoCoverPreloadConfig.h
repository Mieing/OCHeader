@class NSString, AWESearchGeneralSingleVideoCoverPreloadSceneConfig;

@interface AWESearchGeneralSingleVideoCoverPreloadConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchGeneralSingleVideoCoverPreloadSceneConfig *chunkCompleteConfig;
@property (retain, nonatomic) AWESearchGeneralSingleVideoCoverPreloadSceneConfig *loadMoreConfig;
@property (retain, nonatomic) AWESearchGeneralSingleVideoCoverPreloadSceneConfig *scrollStartConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
