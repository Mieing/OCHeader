@interface SolitaireDataLoader : NSObject

+ (id)hashNameForString:(id)a0;
+ (id)getSolitairePathWithChatName:(id)a0;
+ (id)getSolitaireDBPath;
+ (id)GetSolitaireCacheDir;
+ (id)LoadSessionHandlerWithChatName:(id)a0;
+ (BOOL)SyncSessionHandlerToLocalFile:(id)a0;

@end
