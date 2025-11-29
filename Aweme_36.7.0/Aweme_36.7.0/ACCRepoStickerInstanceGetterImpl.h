@class NSString;

@interface ACCRepoStickerInstanceGetterImpl : NSObject <ACCRepoStickerInstanceGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactionStickerIdsWithProjectIndex:(long long)a0;
- (id)interactionStickerTypesWithProjectIndex:(long long)a0;
- (id)p_interactionStickerSubInfosWithProjectIndex:(long long)a0 map:(id /* block */)a1;

@end
