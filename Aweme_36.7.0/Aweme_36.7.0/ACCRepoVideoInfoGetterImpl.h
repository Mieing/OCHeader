@class NSString;

@interface ACCRepoVideoInfoGetterImpl : NSObject <ACCRepoVideoInfoGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraPositionsWithProjectIndex:(long long)a0;
- (id)flashModesWithProjectIndex:(long long)a0;
- (id)filterIdsWithProjectIndex:(long long)a0;
- (id)infoStickerIdsWithProjectIndex:(long long)a0;
- (id)infoStickerTypesWithProjectIndex:(long long)a0;
- (long long)textStickerCountWithProjectIndex:(long long)a0;
- (id)effectIdsWithProjectIndex:(long long)a0;
- (id)effectTextsWithProjectIndex:(long long)a0;
- (id)p_fragmentSubInfosWithProjectIndex:(long long)a0 map:(id /* block */)a1;
- (id)p_infoStickSubInfosWithProjectIndex:(long long)a0 map:(id /* block */)a1;
- (id)p_fragmentSubInfosWithProjectIndex:(long long)a0 flatMap:(id /* block */)a1;

@end
