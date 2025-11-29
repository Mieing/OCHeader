@class NSString;

@interface AWEOFGVideo : HTSService <AWEOFGVideo>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)ironManPublishTaskWithAweModel:(id)a0 privacyType:(unsigned long long)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (id)startVideoClipViewControllerWithModel:(id)a0 originPublishModel:(id)a1 extraDict:(id)a2 ofgClientKey:(id)a3 ofgAppID:(id)a4 ofgError:(id *)a5;
+ (id)createCutSameMVVideoWithTemplateId:(id)a0 assetPathList:(id)a1 withInfo:(id)a2 ofgClientKey:(id)a3 ofgAppID:(id)a4 ofgError:(id *)a5;
+ (id)createCutSameMVTemplateWithTemplateId:(id)a0 withInfo:(id)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;
+ (id)createVideoFromMusicWithInfo:(id)a0 missionModel:(id)a1 commercialAnchorModel:(id)a2 shouldApplySticker:(BOOL)a3 ofgClientKey:(id)a4 ofgAppID:(id)a5 ofgError:(id *)a6;
+ (id)startVideoWithStickerID:(id)a0 referString:(id)a1 extraInfo:(id)a2 missionModel:(id)a3 commercialAnchorModel:(id)a4 prioritized:(BOOL)a5 filterBusiness:(BOOL)a6 ofgClientKey:(id)a7 ofgAppID:(id)a8 ofgError:(id *)a9;


@end
