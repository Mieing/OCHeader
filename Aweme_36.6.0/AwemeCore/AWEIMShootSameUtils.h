@class NSString;

@interface AWEIMShootSameUtils : NSObject <IESIMShootSameUtilsInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
+ (id)shootSameStickerIDsWithAwemeModel:(id)a0;
+ (id)shootSameMsgContentStickerIDsWithAwemeModel:(id)a0;
+ (id)shootSameCustomStickerIDWithAwemeModel:(id)a0;
+ (id)shootSameBlockSettings;

- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)startStoryVideoWithStickerIDArray:(id)a0 musicModel:(id)a1 conversation:(id)a2 cameraPosition:(unsigned long long)a3 dontAutoChangeToTextModeWhenPublish:(BOOL)a4 info:(id)a5;
- (void)startStoryVideoWithStickerIDArray:(id)a0 musicModel:(id)a1 conversation:(id)a2 cameraPosition:(unsigned long long)a3 dontAutoChangeToTextModeWhenPublish:(BOOL)a4 info:(id)a5 completion:(id /* block */)a6;
- (void)addStickerIdsToLocalAsset:(id)a0 withPHAsset:(id)a1 imageData:(id)a2;
- (void)addStickerIdsToLocalAsset:(id)a0 withPHAsset:(id)a1 videoAsset:(id)a2;
- (id)getSyncedExtWithMessageType:(long long)a0 extraInfo:(id)a1;
- (id)getSyncedExtWithMessageType:(long long)a0 extraInfo:(id)a1 localAsset:(id)a2;
- (BOOL)isSupportStickerWithMessageType:(long long)a0;
- (id)getImageStickerIdsWithAsset:(id)a0 imageData:(id)a1;
- (id)getVideoStickerIdsWithAsset:(id)a0 videoAsset:(id)a1;
- (BOOL)shooldBlockShootSameWithMessage:(id)a0;
- (BOOL)enableShowShootSameViewWithMessage:(id)a0 conversation:(id)a1;
- (BOOL)enableShowShootSameViewWhenNoSocialEffectWithMessage:(id)a0;
- (BOOL)isDuetEffectAndNeedParticipateWithMessage:(id)a0;
- (BOOL)isDuetEffectWithMessage:(id)a0;
- (BOOL)isSocialEffectMessage:(id)a0;
- (BOOL)isEffectValidInMessage:(id)a0 matchConversation:(id)a1;
- (BOOL)coplayHasFinishedParticipateWithMessage:(id)a0;
- (void)startStoryVideoWithStickerIDArray:(id)a0 musicModel:(id)a1 conversation:(id)a2 info:(id)a3;

@end
