@class EcClient, NSMutableDictionary;

@interface EcTagManager : NSObject

@property (weak, nonatomic) EcClient *client;
@property (retain, nonatomic) NSMutableDictionary *albumChangeDelegate;

+ (id)commandCreateTagName:(id)a0;
+ (id)commandPredefineTagCreate:(unsigned long long)a0;
+ (id)commandDeleteTagId:(long long)a0;
+ (id)commandUpdateTagId:(long long)a0 name:(id)a1;
+ (id)commandUpdateTagId:(long long)a0 coverLink:(unsigned long long)a1;
+ (id)commandAssetRemoveFromTag:(unsigned long long)a0 param:(id)a1;

- (void)postDeleteChanges:(id)a0;
- (void)postUpsertChanges:(id)a0 bCreate:(BOOL)a1;
- (void)upsertTagInfo:(id)a0 cloudAsset:(id)a1;
- (void)modifyCoverCommands:(id)a0 complete:(id /* block */)a1;
- (void)upsertTagList:(id)a0;
- (id)commandsRemoveCoverLink:(id)a0;
- (void)upsertTagRelationList:(id)a0;
- (void)createTag:(id)a0 complete:(id /* block */)a1;
- (void)createPredefineTag:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)deleteTag:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)renameTag:(unsigned long long)a0 name:(id)a1 complete:(id /* block */)a2;
- (void)modifyCover:(unsigned long long)a0 assetId:(id)a1 complete:(id /* block */)a2;
- (id)tagCover:(unsigned long long)a0;
- (void)removeAssetsTagId:(unsigned long long)a0 assets:(id)a1 complete:(id /* block */)a2;
- (void)getAssetsTagId:(unsigned long long)a0 cursor:(id)a1 limit:(long long)a2 complete:(id /* block */)a3;
- (void)getTagInfos:(id)a0 complete:(id /* block */)a1;
- (void)getTagsCursor:(id)a0 complete:(id /* block */)a1;
- (void)addObserveAlbum:(unsigned long long)a0 delegate:(id)a1;
- (void)removeObserveAlbum:(unsigned long long)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
