@class NSString;

@interface AWEQuickFlashStickerDataHelper : NSObject <ACCQuickFlashDataHelperProtocol, AWEStudioQuickFlashStickerDataHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quickFlashModelFromSchema:(id)a0;
+ (id)quickFlashModelFromStickerString:(id)a0 preferredFollowEntry:(BOOL)a1;
+ (BOOL)showQuickFlashEntry:(id)a0;
+ (void)addChallengeNameWithPublishModel:(id)a0;
+ (void)requestQuickFlashModelWithTemplateID:(id)a0 completion:(id /* block */)a1;
+ (void)requestQuickFlashModelWithTitle:(id)a0 completion:(id /* block */)a1;
+ (void)requestQuickFlashInfoWithID:(id)a0 title:(id)a1 needFetchBindPropModel:(BOOL)a2 completion:(id /* block */)a3;
+ (void)requestQuickFlashModelWithEffectID:(id)a0 completion:(id /* block */)a1;
+ (void)requestEffectModelWithFlashMobID:(id)a0 completion:(id /* block */)a1;
+ (void)changeFlashMobFavoriteStatusWithParamDict:(id)a0 collect:(BOOL)a1 completion:(id /* block */)a2;
+ (BOOL)commonQuickFlashEntry:(id)a0;
+ (id)parseQuickFlashModelFromInfo:(id)a0;
+ (void)trackParseQuickFlashModelWithStatus:(long long)a0 stickerArrayString:(id)a1;
+ (void)requestFlashMobBindWithSourceID:(id)a0 sourceType:(unsigned long long)a1 targetType:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)parseQuickFlashModelFromInfo:(id)a0 publishModel:(id)a1;
+ (void)flashMobFavoriteStatusWithParamDict:(id)a0 completion:(id /* block */)a1;
+ (void)changeFlashMobFavoriteStatusWithFlashMobId:(id)a0 flashMobTitle:(id)a1 collect:(BOOL)a2 completion:(id /* block */)a3;
+ (void)flashMobFavoriteStatusWithFlashMobId:(id)a0 flashMobTitle:(id)a1 completion:(id /* block */)a2;
+ (void)fetchCollectListWithCursor:(long long)a0 count:(long long)a1 completion:(id /* block */)a2;


@end
