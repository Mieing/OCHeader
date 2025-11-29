@class NSString;

@interface AWECommentMiniEmoticonPanelManager : NSObject <AWEUserMessage, AWECommentMiniEmoticonPanelManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)recordEmoticonUsed:(id)a0;
+ (id)getRemoteDataEmoticons;
+ (id)getRecentlyUsedEmoticons;
+ (BOOL)isUsedRemoteDataEmoticons;
+ (id)getFinalDataEmoticonsWithCount:(long long)a0;
+ (id)getRecentlyUsedEmoticonsOfCount:(long long)a0;
+ (id)getRemoteDataEmoticonsOfCount:(long long)a0;
+ (id)defaultEmoticons;
+ (void)checkEmoticonsValid:(id)a0 expectedCount:(long long)a1;
+ (Class)aAWECommentRecentUsedEmojiDOUYINHTSAdapterClass;
+ (BOOL)isFetchedRemoteDataEmoticons;

@end
