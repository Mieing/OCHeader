@class NSString;

@interface TingDiscoverTapesServiceCpp : UnitRCObjcBaseProxyClass <TingDiscoverTapesService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithScene:(int)a0;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (BOOL)discoverMusicTapes:(unsigned int)a0;
- (void)getListenCommentInfo:(unsigned int)a0 listenIds:(id)a1;
- (void)opLike:(unsigned int)a0 scene:(int)a1 listenId:(id)a2 isCancel:(BOOL)a3;

@end
