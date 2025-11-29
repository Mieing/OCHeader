@class NSString;

@interface AFDFastReplyStrategyUtils : NSObject <AFDFastReplyStrategyUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fullScreenEmojiAnimationFromImage:(id)a0;
+ (void)setHasClickedDiggToShare:(BOOL)a0 awemeModel:(id)a1;
+ (id)getEmojisWithContext:(id)a0 strategy:(long long)a1 type:(unsigned long long)a2;
+ (void)trackEmojiShow:(id)a0 extraParams:(id)a1;
+ (BOOL)isFeedReverseForIMQuickReplyWithContext:(id)a0;
+ (BOOL)canShowCommentWithContext:(id)a0 ignoreDormant:(BOOL)a1;
+ (BOOL)canShowCommentWithContext:(id)a0;
+ (void)preloadEmojiWithAweme:(id)a0;
+ (id)getPlaceholderWithUserModel:(id)a0;
+ (id)getStaticSettingsEmojisWithDefaultData:(id)a0;
+ (BOOL)forbidCommentByBasicCondition;
+ (BOOL)forbidCommentWithModel:(id)a0;
+ (id)getSettingEmojis:(long long)a0 filterIcon:(id)a1;
+ (id)emojis:(id)a0 filterIcon:(id)a1;
+ (id)recentEmojisWithCount:(long long)a0 useDefaultEmoticons:(BOOL)a1;
+ (id)getDataWithEmojiName:(id)a0;
+ (id)getSettingEmojis:(long long)a0;
+ (id)recentEmojisWithCount:(long long)a0;
+ (id)defaultEmojis;


@end
