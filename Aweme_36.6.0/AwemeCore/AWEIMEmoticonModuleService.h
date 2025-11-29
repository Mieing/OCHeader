@class NSString;

@interface AWEIMEmoticonModuleService : NSObject <AWEIMEmoticonModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)emoticonCacheName;
- (id)createGiphyMessageWithShareEmoticonModel:(id)a0 mainMessage:(id)a1 shareModel:(id)a2;
- (void)trackFastEmojiClickWithGroupID:(id)a0 index:(long long)a1 source:(id)a2 text:(id)a3;
- (id)createEmoticonSelectionView;
- (id)createShareInputEmoticonToolBarView;
- (id)createShareInputEmoticonContainerView;

@end
