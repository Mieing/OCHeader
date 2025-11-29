@class NSString;

@interface IESIMEmoticonManager : HTSService <IESIMEmoticonManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localStaticEmoticonInfos;
- (id)staticEmoticons;
- (id)emoticonWithTagName:(id)a0;
- (id)recentIMMessageEmojis;
- (id)recentlyUsedEmoticonTitles;
- (id)emoticonTitleToIconMapper;
- (id)emoticonIconToTitleMapper;
- (BOOL)isEmojiValidInIMMessage:(id)a0;
- (BOOL)hasLimitedEmojiNow;
- (id)emoticonImageNamed:(id)a0;
- (id)emoticonImageWithTagName:(id)a0;
- (void)fetchLittleEmoticonResourceWithContext:(id)a0;
- (id)resourceMD5;
- (void)preloadLocalStaticEmoticons;
- (id)recentlyUsedEmoticons;
- (void)resetRecentlyUsedEmoticons:(id)a0;
- (void)reportResourceLostWithContext:(id)a0 withEmoticonText:(id)a1 iconName:(id)a2;

@end
