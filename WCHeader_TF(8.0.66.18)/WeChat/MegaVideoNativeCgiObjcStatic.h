@interface MegaVideoNativeCgiObjcStatic : NSObject

+ (void)fetchContinuePlayNextFeed:(id)a0 lastBuffer:(id)a1 relatedListLastBuffer:(id)a2 commentScene:(int)a3 callback:(id /* block */)a4;
+ (void)modSeeLaterStateWithParams:(id)a0 modParams:(id)a1 commentScene:(int)a2;
+ (void)fetchChannelFlow:(int)a0 lastBuffer:(id)a1 callback:(id /* block */)a2;
+ (void)prefetchChannelFlow:(int)a0 redDotInfo:(id)a1 prefetchData:(id)a2 callback:(id /* block */)a3;
+ (void)fetchRelatedList:(id)a0 scene:(int)a1 fromSessionId:(id)a2 pullType:(int)a3 lastBuffer:(id)a4 longVideoPlayerContext:(id)a5 commentScene:(int)a6 callback:(id /* block */)a7;
+ (void)fetchTopicList:(int)a0 finderObject:(id)a1 lastBuffer:(id)a2 direction:(int)a3 commentScene:(int)a4 callback:(id /* block */)a5;
+ (void)fetchTopStoryFlow:(int)a0 pullType:(int)a1 lastBuffer:(id)a2 commentScene:(int)a3 redDotInfo:(id)a4 callback:(id /* block */)a5;

@end
