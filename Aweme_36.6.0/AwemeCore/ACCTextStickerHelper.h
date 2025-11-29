@class NSString;

@interface ACCTextStickerHelper : NSObject <ACCTextStickerHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateTextConfigWithSticker:(id)a0 repository:(id)a1;
+ (id)baseTextStickerWithId:(id)a0 megaEditor:(id)a1;
+ (long long)textCount:(id)a0;
+ (id)imageTagModelWithTagType:(long long)a0;
+ (void)updateStickerVisibleStatus:(BOOL)a0 megaEditor:(id)a1 nleModel:(id)a2;
+ (id)saveStickerImage:(id)a0;
+ (BOOL)isTextVisible:(id)a0;
+ (id)templateImagePath:(id)a0;
+ (void)getTextStickersReviewInfo:(id)a0 stickerContainer:(id)a1 completion:(id /* block */)a2;
+ (id)lineDurationWithSticker:(id)a0;
+ (id)textStickerContent:(id)a0;
+ (id)defaultTextInfoWithStartTime:(double)a0 duration:(double)a1 widthLimit:(double)a2;
+ (unsigned long long)rememberedLastTab;
+ (void)fetchChallengeNames:(id)a0 readModel:(id)a1;
+ (void)updateStickerViewsShowStatus:(BOOL)a0 exceptSticker:(id)a1 instanceStickerContainer:(id)a2 globalStickerContainer:(id)a3;
+ (id)placeholderTextStickerViews:(id)a0 megaEditor:(id)a1;
+ (id)placeholderTextStickerViews:(id)a0;
+ (double)fitFontSizeWithContent:(id)a0 fontModel:(id)a1 fontSize:(double)a2;
+ (void)rememberLastTab:(unsigned long long)a0;
+ (void)updateLastSelectedSpeaker:(id)a0;
+ (id)getStickerImage:(id)a0;
+ (void)updateStickerViewsShowStatus:(BOOL)a0 globalStickerContainer:(id)a1;
+ (id)templateForderPath;
+ (id)getLastSelectedSpeaker;
+ (void)updateReadModel:(id)a0 challengeMap:(id)a1;
+ (id)textStickerViewsInContainer:(id)a0;
+ (void)fontInfosInSticker:(id)a0 completion:(id /* block */)a1;


@end
