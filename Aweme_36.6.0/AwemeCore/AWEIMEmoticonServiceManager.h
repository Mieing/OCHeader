@class NSString;

@interface AWEIMEmoticonServiceManager : NSObject <AWEIMEmoticonDataManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackKeyForStyle:(long long)a0;
+ (id)trackEmojiTypeForStickerType:(unsigned long long)a0;
+ (long long)genderForEmoticonNetworkWithGenderType:(long long)a0;
+ (id)trackTabEnterMethodForStyle:(long long)a0;
+ (id)trackEmojiFromForStyle:(long long)a0 emoticonModel:(id)a1;
+ (id)companyHighlightColor;
+ (id)normalHighlightColor;
+ (id)normalHighlightClickColor;
+ (long long)trackAweTypeForStickerType:(unsigned long long)a0;
+ (BOOL)canShowGiphyNameWithAweType:(long long)a0;
+ (BOOL)enableActivityWithStickerType:(unsigned long long)a0;
+ (BOOL)canShowGiphyNameWithStickerType:(unsigned long long)a0;
+ (id)activityDescriptionWithEmoticon:(id)a0;
+ (id)activitySchemaWithEmoticon:(id)a0;
+ (id)sharedInstance;

- (id)staticStickerPathForInteractiveEmoticon:(id)a0;
- (id)animateStickerPathForInteractiveEmoticon:(id)a0;
- (id)singleSepcialEmojiPathForInteractiveEmoticon:(id)a0;
- (void)lazyDownloadSpecialResourceName:(id)a0 complete:(id /* block */)a1;
- (id)interactiveEmotionThemeModel;
- (id)decodeWithText:(id)a0 template:(id)a1 font:(id)a2 linkTapAction:(id /* block */)a3;
- (id)decodeWithText:(id)a0 textColor:(id)a1 template:(id)a2 font:(id)a3 linkTapAction:(id /* block */)a4;
- (id)decodeWithText:(id)a0 textColor:(id)a1 highlightColor:(id)a2 needUnderlineBelowLink:(BOOL)a3 linkArray:(id)a4 font:(id)a5 isCompany:(BOOL)a6 linkTapAction:(id /* block */)a7;
- (double)textMessageLineHeight;

@end
